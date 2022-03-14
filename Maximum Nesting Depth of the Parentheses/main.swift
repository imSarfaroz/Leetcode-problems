class Solution {
    func maxDepth(_ s: String) -> Int {
        var count:Int = 0
        var ans:Int = 0
        
        for char in s {
            if char == "(" { count+=1 }
            else if char == ")" {count-=1}
            ans = max(ans, count)
        }
        return ans
    }
}