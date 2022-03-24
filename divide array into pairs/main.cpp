class Solution {
public:
    bool divideArray(vector<int>& nums) {
        map<int,int> mp;
        
        for(auto num: nums){
            mp[num]++;
        }
        
        for(auto i: mp){
            if(i.second % 2 != 0){
                return false;
            }
        }
        return true;
    }
};