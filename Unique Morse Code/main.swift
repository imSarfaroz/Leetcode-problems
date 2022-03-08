class Solution {
    func uniqueMorseRepresentations(_ words: [String]) -> Int {
        var symbols:[String] = [".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."]
        
        var tem = Set<String>()
        
        for word in words{
            var str = ""
            for ch in word {
                if let index = ch.asciiValue {
                    str.append(symbols[Int(index) - 97])    
                }
            }
            tem.insert(str)
        }
        return tem.count
    }
}