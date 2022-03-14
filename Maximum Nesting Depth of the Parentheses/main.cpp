class Solution {
public:
    int maxDepth(string s) {
        int count;
        int ans = 0;
        
        for(char ch: s){
            if(ch == '('){
                count++;
            } else if(ch == ')'){
                count--;
            }
            ans = max(ans, count);
        }
        return ans;
    }
};