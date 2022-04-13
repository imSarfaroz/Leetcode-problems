class Solution {
    func twoSum(_ numbers: [Int], _ target: Int) -> [Int] {
        var start:Int = 0
        var end:Int = numbers.count - 1
        
        while(start < end) {
            if(numbers[start] + numbers[end] == target) {
                return [start+1, end+1]
            } else if (numbers[start] + numbers[end] > target) {
                end-=1
            } else {
                start+=1
            }
        }
        return []
    }
}