class Solution {
    func timeRequiredToBuy(_ tickets: [Int], _ k: Int) -> Int {
        var count:Int = 0
        var copyTickets = tickets
        
        while copyTickets[k] != 0 {
            for i in 0..<copyTickets.count where copyTickets[i] > 0 && copyTickets[k] != 0{
                    count+=1
                    copyTickets[i]-=1
            }
        }
        return count
    }
}