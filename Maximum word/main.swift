import UIKit

class Solution {
    func mostWordsFound(_ sentences: [String]) -> Int {
        var maxValue = Int.min
        for i in sentences {
            var count = i.components(separatedBy: " ").count
            maxValue = max(maxValue, count)
        }
        return maxValue
    }
}
