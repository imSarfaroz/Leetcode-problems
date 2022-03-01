class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        
        int max1 = 0;
        int max2 = 0;
        
        max1 = nums[0] * nums[1];

        for(int j = nums.size() - 1; j > nums.size() - 2; j--) {
            max2 = nums[j] * nums[j - 1];
        }
            return max2 - max1;
    }
};


// class Solution {
// public:
//     int maxProductDifference(vector<int>& nums) {
//         sort(nums.begin(), nums.end());
        
//         int size = nums.size();
//         return (nums[size - 1] * nums[size - 2]) - (nums[0] * nums[1]);
//     }
// };