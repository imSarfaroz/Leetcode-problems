class Solution {
public:
    void reverseString(vector<char>& s) {
        
        reverse(s.begin(), s.end());
    }
};

class Solution {
public:
    void reverseString(vector<char>& s) {
        stack<char> stck;
        
        for(auto &ch: s) {
            stck.push(ch);
        }
        s.clear();
        while(stck.empty() == false) {
            s.push_back(stck.top());
            stck.pop();
        }
    }
};