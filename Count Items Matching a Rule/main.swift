import UIKit

class Solution {
    func countMatches(_ items: [[String]], _ ruleKey: String, _ ruleValue: String) -> Int {
        var count = 0;
        for i in 0..<items.count {
            if(ruleKey == "type") {
                if(ruleValue == items[i][0]) {
                count+=1
                }
            } else if(ruleKey == "color") {
                if(ruleValue == items[i][1]){
                count+=1
                }
            } else if (ruleKey == "name") {
                if(ruleValue == items[i][2]) {
                count+=1
                }
            }
        }
        return count
    }
}

// Second Solution
class Solution {
    func countMatches(_ items: [[String]], _ ruleKey: String, _ ruleValue: String) -> Int {
        var count = 0;
        
        var dictionary: [String : Int] = ["type": 0, "color": 1, "name": 2]
        guard var index = dictionary[ruleKey] else {return 0}
        
        for i in items {
            if(i[index] == ruleValue){
                count+=1
            }
        }
        return count
    }
}