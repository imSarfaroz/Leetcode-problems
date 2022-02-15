import UIKit

class Solution {
    func restoreString(_ s: String, _ indices: [Int]) -> String {
        var arr = Array<Character>(repeating: " ", count: indices.count)
        var chars = Array(s)
          
        for i in 0..<indices.count{
            arr[indices[i]] = chars[i]
        }
        return String(arr)
    }
}

// class Solution {
//     func restoreString(_ s: String, _ indices: [Int]) -> String {
//         var arr = Array<Character>(repeating: " ", count: indices.count)
        
//         for(index, char) in s.enumerated() {
//             arr[indices[index]] = char
//         }
        
//         return String(arr)
//     }
// }