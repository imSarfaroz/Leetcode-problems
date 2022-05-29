class Solution {
    func maxSubArray(_ nums: [Int]) -> Int {
     var maxM = 0
     var maxAtMoment = nums[0]
        
        if(nums.count == 1) {
            return nums[0]
        }
        
        for i in 0..<nums.count {
            maxM = maxM + nums[i]
            maxAtMoment = max(maxM, maxAtMoment)
            maxM = max(maxM, 0)
        }
        
        return maxAtMoment;
        
    }
}