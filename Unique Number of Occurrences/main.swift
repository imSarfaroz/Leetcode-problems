class Solution {
    func uniqueOccurrences(_ arr: [Int]) -> Bool {
        var mp = [Int:Int]()
        
        for i in arr{
            mp[i, default:0]+=1
        }
        
        let values = Set(mp.values)
        
        return mp.count == values.count
    }
}