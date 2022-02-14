import UIKit

class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        vector<int> arr;
        
        for(int i = 0; i < nums.size(); i+=2){
            arr.insert(arr.end(), nums[i], nums[i+1]);
        }
        
        return arr;
    }
};