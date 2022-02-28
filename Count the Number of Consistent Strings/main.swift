class Solution {
    func countConsistentStrings(_ allowed: String, _ words: [String]) -> Int {
        let allowedSet = Set(allowed)
        
        var count = 0
        for word in words {
            var shouldAdd = true
            for char in word {
                if !allowedSet.contains(char) {
                    shouldAdd = false
                    break
                }
            }
            if shouldAdd {
                count+=1
            }
        }
        return count
    }
}