class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        map<int, int> dict;
        
        for(auto num: nums) {
            dict[num]++;
            
            if(dict[num] > 1){
                return num;
            }
        }
        return 0;
    }
};