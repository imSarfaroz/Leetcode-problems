class Solution {
public:
    int minSteps(string s, string t) {
        unordered_map<char, int> mp1;
        int count = 0;
        
        for(int i = 0; i < s.size(); i++) {
            mp1[s[i]]++;
            mp1[t[i]]--;
        }
        
        for(auto& ch: mp1) {
            if(ch.second > 0) {
                count+=ch.second;
            }
        }
        return count;
    }
};