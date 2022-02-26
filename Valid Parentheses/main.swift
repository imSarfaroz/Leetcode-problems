class Solution {
    func isValid(_ s: String) -> Bool {
        
        var charArray = [Character]()
        
        for ch in s {
            if(ch == "(" || ch == "{" || ch == "[") {
                charArray.insert(ch, at: 0)
            } else {
                
                if(charArray.isEmpty) {
                    return false
                }
                
                if(ch == ")" && charArray.first != "(" || ch == "]" &&                                  charArray.first != "[" || ch == "}" && charArray.first != "{") {
                    return false
                } 
                
                charArray.removeFirst()
            }
        }
        
        return charArray.isEmpty
    }
}