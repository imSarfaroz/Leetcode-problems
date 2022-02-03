import UIKit

class Solution {
    func maximumWealth(_ accounts: [[Int]]) -> Int {
        var arr: [Int] = []
        for account in accounts{
        let sum = account.reduce(0, +)
        arr.append(sum)
        }
          return arr.max()!
    }
}