class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int size = nums.size();
        int max = 0;
        
        int count = 0;
        
        for(int i = 0; i < size; i++) {
            for(int j = i+1; j < size; j++) {
                
                count = (nums[i]-1)*(nums[j]-1);
                    if(max < count) {
                        max = count;
                }
            }
        }
        return max;
    }
};


class Solution {
public:
    int maxProduct(vector<int>& nums) {
        priority_queue<int> queue(nums.begin(), nums.end());
        
        int first = queue.top();
        queue.pop();
        int second = queue.top();
        
        return (first-1)*(second-1)
    }
};


class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int size = nums.size();
        
        sort(nums.begin(), nums.end());
        
        return (nums[size-1]-1) * (nums[size-2]-1);
    }
};