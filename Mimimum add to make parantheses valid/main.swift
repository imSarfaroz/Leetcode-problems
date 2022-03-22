class Solution {
    func minAddToMakeValid(_ s: String) -> Int {
        var stack = [Character]()
        var count:Int = 0
        
        for char in s {
            if(char == "(") {
                stack.append(char);
            } else {
                if(stack.count > 0) {
                    stack.removeLast()
                } else {
                    count+=1
                }
            }
        }
        return count + stack.count
    }
}Time Needed to Buy Tickets