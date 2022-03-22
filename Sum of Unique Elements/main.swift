class Solution {
    func sumOfUnique(_ nums: [Int]) -> Int {
        var dictionary = [Int:Int]()
        var count:Int = 0
        
        for num in nums {
            dictionary[num, default: 0]+=1
        }
        
        for(key, value) in dictionary {
            if value == 1 {
                count += key
            }
        }
        return count
    }
}