class Solution {
    func minSteps(_ s: String, _ t: String) -> Int {
        var mp = [Character:Int]()
        
        for char in s {
            mp[char, default:0]+=1
        }
        
        for char in t {
            mp[char, default:0]-=1
        }
        
        var count:Int = 0
        for (key, value) in mp {
            if(value > 0) {
                count+=value
            }
        }
        return count
    }
}