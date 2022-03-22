class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        map<int, int> dic;
        int sum = 0;
        
        for(auto i: nums) {
            dic[i]++;
        }
        
        for(auto j: dic) {
            if(j.second == 1){
                sum+=j.first;
            }
        }
        return sum;
    }
};