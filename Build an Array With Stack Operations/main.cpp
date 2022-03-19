class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> ops;
        int count = 1;
        for(int i = 0; i < target.size(); i++) {
            while(count != target[i]) {
                ops.push_back("Push");
                ops.push_back("Pop");
                count++;
            } 
            ops.push_back("Push");
            count++;
        }
        return ops;
    }
};