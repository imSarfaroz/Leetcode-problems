class Solution {
    func divideArray(_ nums: [Int]) -> Bool {
        var mp = [Int:Int]()
        
        for num in nums {
            mp[num, default:0]+=1
        }
        
        for(key, value) in mp {
            if value % 2 != 0 {
                return false
            }
        }
        return true
    }
}