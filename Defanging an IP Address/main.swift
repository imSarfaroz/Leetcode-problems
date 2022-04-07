class Solution {
    func defangIPaddr(_ address: String) -> String {
        var str:String = ""
        for char in address {
            if char == "." {
                str+="[.]"
            } else {
                str+=String(char)
            }
        }
        return str
    }
}


class Solution {
    func defangIPaddr(_ address: String) -> String {
       return address.replacingOccurrences(of: ".", with: "[.]")
    }
}