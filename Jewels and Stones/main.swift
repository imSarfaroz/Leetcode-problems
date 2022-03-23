class Solution {
    func numJewelsInStones(_ jewels: String, _ stones: String) -> Int {
        var dict = [Character:Int]()
        var count:Int = 0
        
        for stone in stones {
            dict[stone, default:0]+=1
        }
        
        for char in jewels {
            if dict[char] != nil {
                count += dict[char]!
            } 
        }
        return count
    }
}

class Solution {
    func numJewelsInStones(_ jewels: String, _ stones: String) -> Int {
        var count:Int = 0
        
        for stone in stones where jewels.contains(stone){
            count+=1
        }
        return count;
    }
}