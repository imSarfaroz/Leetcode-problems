#include <iostream>

class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        int size = nums.size();
        int count = 0;
        
        for(int i = 0; i < size; i++){
            for(int j = 0; j < size; j++){
                if(nums[i] - nums[j] == k){
                    count++;
                }
            }
        }
        return count;
    }
};