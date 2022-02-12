#include <iostream>

using namespace std;
// O(logn)
class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int size = nums.size();
        auto sorted = nums;
        sort(sorted.begin(), sorted.end());
        
        map<int, int> Map;
        
        for(int i = 0; i < size; i++){
            if(Map.count(sorted[i] == 0)){
                Map.insert({sorted[i], i});
            }
        }
        vector<int> vec;
        for(int i = 0; i < size; i++){
            vec.push_back(sorted[i]);
        }
        return vec;
    }
};

// OR
// O(n^2)
// class Solution {
// public:
//     vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
//         int size = nums.size();
//         vector<int> arr;
        
//         for(int i = 0; i < size; i++){
//         int count = 0;
//             for(int j = 0; j < size; j++){
//                 if(nums[i] > nums[j]){
//                     count++;
//                 }
//             }
//             arr.push_back(count);
//         }
//         return arr;
//     }
// };