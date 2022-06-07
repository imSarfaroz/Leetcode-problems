class Solution {
    func lengthOfLastWord(_ s: String) -> Int {
        var string = s.split(separator: " ")
        
        guard string.count > 0 else {return 0}
        return string.last?.count ?? 0
    }
}