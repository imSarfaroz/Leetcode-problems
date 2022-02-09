import UIKit

class Solution {
    func kidsWithCandies(_ candies: [Int], _ extraCandies: Int) -> [Bool] {
        var arr = [Bool]()
        
        for i in candies {
        if((i + extraCandies) >= candies.max()!){ 
            arr.append(true)
        }else{
            arr.append(false)
             }
        }
        return arr
    }
}