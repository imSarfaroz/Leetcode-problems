import UIKit

class Solution {
    func decode(_ encoded: [Int], _ first: Int) -> [Int] {
        var result: [Int] = [first], decoded = first
        for num in encoded {
            decoded = num ^ decoded
            result.append(decoded)
        }
        return result
    }
}