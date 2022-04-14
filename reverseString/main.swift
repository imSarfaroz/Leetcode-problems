class Solution {
    func reverseString(_ s: inout [Character]) {
        s.reverse()
    }
}

class Solution {
    func reverseString(_ s: inout [Character]) {
        var begin = 0
        var end = s.count - 1
        
        while(begin < end) {
            // swap
            var tem = s[begin]
            s[begin] = s[end]
            s[end] = tem
            
            begin+=1
            end-=1
        }
    }
}