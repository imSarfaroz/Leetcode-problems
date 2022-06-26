class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
       
        if(nums[0] != 0) return 0; 
        int size = nums.size();

        for(int i = 0; i < size-1; i++) {
            if((nums[i] + 1) != nums[i+1]) {
                return nums[i]+1;
            }
        }

        return nums[size-1]+1;
    }
};
