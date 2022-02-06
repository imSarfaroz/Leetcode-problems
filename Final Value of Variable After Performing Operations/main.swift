import UIKit

class Solution {
    func finalValueAfterOperations(_ operations: [String]) -> Int {
        var count: Int = 0
        for i in operations{
            if (i == "X++" || i == "++X") {
                count+=1
            } else {
                count-=1
            }
        }
        return count
    }
}