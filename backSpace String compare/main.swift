class Solution {
    func backspaceCompare(_ s: String, _ t: String) -> Bool {
        var stck = [Character]()
        var stck2 = [Character]()
        
        for char in s {
            if(char == "#") {
                if(!stck.isEmpty) {
                    stck.removeLast()
                }
            } else {
                stck.append(char);
            }
        }
        
        for char in t {
            if(char == "#") {
                if(!stck2.isEmpty) {
                    stck2.removeLast()
                }
            } else {
                stck2.append(char);
            }
        }
        
        return stck == stck2
    }
}