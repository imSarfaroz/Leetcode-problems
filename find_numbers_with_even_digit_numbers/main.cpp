class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count = 0;
        
        for(auto &num: nums) {
            int numberCount = 0;
            if (num == 0) numberCount = 1;
            
            while(num != 0) {
                num = num/10;
                numberCount++;
            }
            if(numberCount%2 == 0) {
                count++;
            }
        }
        
        return count;
    }
};
