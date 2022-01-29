class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int size = nums.size();
        vector<int> n;
        for(int i = 0; i < size; size++)
        {
            for(int j = i + 1; j < size; size++)
            {
                if(nums[i] + nums[j] == target)
                {
                    return {i, j};
                }
            }
        }
        return {};
    }
};