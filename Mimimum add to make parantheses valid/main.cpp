class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char> stck;
        int count = 0;
        
        for(char ch: s){
            if(ch == '(') {
                stck.push(ch);
            } else {
                if(stck.size() > 0) {
                    stck.pop();
                } else {
                    count++;
                }
            }
        }
        return count + stck.size();
    }
};