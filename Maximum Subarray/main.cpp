class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxM = 0;
        int maxAtMoment = nums[0];
        
        if(nums.size() == 1)
            return nums[0];
        
        for(int i = 0; i < nums.size(); i++) {
            maxM += nums[i];
            maxAtMoment = max(maxM, maxAtMoment);
            maxM = max(maxM, 0);
        }
        
        return maxAtMoment;
    }
};