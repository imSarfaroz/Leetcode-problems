class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        int size = nums.size();
        vector<int> v;
        
        sort(nums.begin(), nums.end());
        
        for(int i = 0; i < size; i++) {
            if(target == nums[i]) {
                v.push_back(i);
            }
        }
        return v;
    }
};