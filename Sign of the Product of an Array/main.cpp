class Solution {
public:
    int arraySign(vector<int>& nums) {
        int product = 1;
        
        for(auto &num: nums) {
            if(num > 0) {
                num = 1; 
            } else if (num < 0) {
                num = -1;
            }
            product*=num;
        }
        return product;
    }
};