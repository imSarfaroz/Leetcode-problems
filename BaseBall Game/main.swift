class Solution {
    func calPoints(_ ops: [String]) -> Int {
        var scores = [Int]()
        
        for i in 0..<ops.count {
            if ops[i] == "D" {
                scores.append(scores.last! * 2)
            } else if ops[i] == "C" {
                scores.removeLast()
            } else if ops[i] == "+" {
                scores.append(scores.last! + scores[scores.count - 2])
            } else {
                scores.append(Int(ops[i])!)
            }
        }
        return scores.reduce(0, +)
    }
}