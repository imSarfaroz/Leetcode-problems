class Solution {
    func findWords(_ words: [String]) -> [String] {
        var st1: Set<Character> = ["q","w","e","r","t", "y","u","i","o", "p"]
        var st2: Set<Character> = ["a","s","d","f","g","h","j","k","l"]
        var st3: Set<Character> = ["z","x","c","v","b","n","m"]
        
        var vec = [String]()
        for word in words {
            var first:Bool = false
            var second:Bool = false
            var third:Bool = false
            var isFalse:Bool = false
            
            for ch in word{
                ch.lowercased()
                if(st1.contains(ch)) {first = true }
                if(st2.contains(ch)) {second = true }
                if(st3.contains(ch)) {third = true }
                
                if(first&&second || second&&third || first&&third) {
                    isFalse = true 
                    break
                }
            }
            
            if isFalse == false {
                vec.append(word)
            }
        }
        
        return vec
    }
}