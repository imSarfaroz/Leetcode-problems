class Solution {
    func countWords(_ words1: [String], _ words2: [String]) -> Int {
        var count:Int = 0
        var mp1 = [String:Int]()
        var mp2 = [String:Int]()
        
        for word in words1 {
            mp1[word, default:0]+=1
        }
        for word in words2 {
            mp2[word, default:0]+=1
        }
        for (value, key) in mp1 where key == 1 {
            if(mp2[value] == 1) {
                count+=1
            }
        }
        return count
    }
}