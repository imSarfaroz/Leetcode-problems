class Solution {
public:
    string removeDuplicates(string s) {
        string tem = "";
        
        for(char ch: s) {
            if(!tem.empty() && tem[tem.size() - 1] == ch) {
                tem.pop_back();
            } else {
                tem += ch;
            }
        }
        return tem;
    }
};