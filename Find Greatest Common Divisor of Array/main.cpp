class Solution {
public:
    int findGCD(vector<int>& nums) {
        int size = nums.size();
        int max = 0;
        int min = nums[0];
        
        int gcd = 0;
        
        for(int i = 0; i < size; i++) {
            if(nums[i] > max) max = nums[i];
            if(nums[i] < min) min = nums[i];
        }
        
        for(int j = 1; j <= max; j++) {
            if(max % j == 0 && min % j == 0) {
                gcd = j;
            }
        }
        return gcd;
    }
};


class Solution {
    int gcd(int a, int b) {
        if(b == 0) return a;
        return gcd(b, a%b);
    }
public:
    int findGCD(vector<int>& nums) {

        int mx = INT_MIN;
        int mn = INT_MAX;
        
        int gcd = 0;
        
        for(auto i: nums) {
            mx = max(mx, i);
            mn = min(mn, i);
        }
        
        return __gcd(mx, mn);
    }
};
