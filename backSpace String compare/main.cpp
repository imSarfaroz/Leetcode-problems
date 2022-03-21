class Solution { 
public:
    bool backspaceCompare(string s, string t) {
        stack<char> stck;
        stack<char> stck2;
        
        for(char ch: s) {
            if(ch == '#') {
                if(!stck.empty()) {
                stck.pop();
                }
            } else {
                stck.push(ch);
            }
        }
        
        for(char ch: t) {
            if(ch == '#') {
                if(!stck2.empty()) {
                stck2.pop();
                }
            } else {
                stck2.push(ch);
            }
        }

        return stck == stck2;
    }
};