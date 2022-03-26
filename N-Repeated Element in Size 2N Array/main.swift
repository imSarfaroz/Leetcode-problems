class Solution {
    func repeatedNTimes(_ nums: [Int]) -> Int {
        var mp = [Int:Int]()
        
        for num in nums {
            mp[num, default:0]+=1
            
            if(mp[num]! > 1){
                return num
            }
        }
        return 0;
    }
}

// OR

class Solution {
    func repeatedNTimes(_ nums: [Int]) -> Int {
        var setOfIntegers = Set<Int>()
        
        for num in nums {
            if setOfIntegers.contains(num) {return num }
            setOfIntegers.insert(num)
        }
        return 0
    }
}