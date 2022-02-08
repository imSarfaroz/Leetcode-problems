#include <iostream>

using namespace std;

class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> arr;
        for(int i = 0; i < n; i++){
            arr.push_back(nums[i]);
            arr.push_back(nums[i + n]);
        }
        return arr;
    }
};


// class Solution {
// public:
//     vector<int> shuffle(vector<int>& nums, int n) {
//         int t = n;
//         vector<int> arr;
//         for(int i = 0; i < n; i++){
//             arr.push_back(nums[i]);
//             for(int j = t; j < t + 1; j++){
//                 arr.push_back(nums[j]);
//             }
//             t++;
//         }
//         return arr;
//     }
// };


