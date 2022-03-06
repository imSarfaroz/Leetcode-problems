class Solution {
   
    func firstPalindrome(_ words: [String]) -> String {
        for s in words {
            if(s == String(s.reversed())) {
                return String(s.reversed())
            }
        }
        return ""
    }
}