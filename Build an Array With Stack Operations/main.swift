class Solution {
    func buildArray(_ target: [Int], _ n: Int) -> [String] {
        var ops = [String]()
        var count:Int = 1
        
        for i in 0..<target.count {
            while (count != target[i]) {
                ops.append("Push")
                ops.append("Pop")
                count+=1
            }
            ops.append("Push")
            count+=1
        }
        return ops
    }
}