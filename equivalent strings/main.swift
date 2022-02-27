class Solution {
    func arrayStringsAreEqual(_ word1: [String], _ word2: [String]) -> Bool {
        var str1 = ""
        var str2 = ""
    
        for i in word1 {
            str1 += i
        }
        for j in word2 {
            str2 += j
        }
        if(str1 == str2) {
            return true
        } else {
            return false
        }
    }
}

class Solution {
    func arrayStringsAreEqual(_ word1: [String], _ word2: [String]) -> Bool { 
        
        return word1.joined() == word2.joined() 
    }
}