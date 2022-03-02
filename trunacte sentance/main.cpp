class Solution {
public:
    string truncateSentence(string s, int k) {
        int count = 0;
        int i;
        
        for(i = 0; i < s.size(); i++) {
            if(s[i] == ' ') {
                count++;
            }
            if(count == k)
                break;
        }
        s.resize(i);
        return s;
    }
};

class Solution {
public:
    string truncateSentence(string s, int k) {
        for(int i = 0; i < s.size(); i++) 
            if(s[i] == ' ' && --k == 0) 
                return s.substr(0,i);
        return s;
    }
};