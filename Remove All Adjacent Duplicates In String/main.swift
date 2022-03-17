class Solution {
    func removeDuplicates(_ s: String) -> String {
        var tem = [Character]()
        
        for ch in s {
            if let last = tem.last, last == ch {
                tem.removeLast()
            } else {
                tem.append(ch)
            }
        }
        return String(tem)
    }
}