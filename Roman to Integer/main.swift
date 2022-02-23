import UIKit

class Solution {
    func romanToInt(_ s: String) -> Int {
        let map = ["I":1, "V": 5, "X": 10, "L": 50, "C": 100, "D": 500, "M": 1000]
        let chars = Array(s)
        
        var sum = 0
        var tem = 0
        for i in 0..<s.count {
            if var a = map[String(chars[i])] {
                if a <= tem{
                    sum += a
                } else {
                    sum -= tem
                    sum += a - tem
                }
                tem = a
            }

        }
        return sum
    }
}