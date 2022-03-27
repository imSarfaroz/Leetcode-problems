class Solution {
    func kthDistinct(_ arr: [String], _ k: Int) -> String {
        var mp = [String:Int]()
        var a = k
        
        for str in arr {
            mp[str, default:0]+=1
        }
        for i in arr {
            if(mp[i] == 1) {a-=1}
            if(a==0){return i}
        }
        return ""
    }
}