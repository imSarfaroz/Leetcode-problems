class Solution {
    func truncateSentence(_ s: String, _ k: Int) -> String {
        var words = s.split(separator: " ")
        var newWords: String = ""
        
        for i in 0..<k {
            newWords = newWords + " " + words[i]
        }
        
        return String(newWords.dropFirst())
    }
}