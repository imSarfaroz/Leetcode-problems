class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        unordered_set<char> valid;
        for(auto x: allowed){
            valid.insert(x);
        }
        
        int tem = 0;
        for(auto x: words) {
            int i = 0;
            for(i = 0; i < words.size(); i++) {
                if(valid.count(x[i])) {
                    continue;
                } else {
                    break;
                }
            }
                if(i == x.size()) {
                    tem++;
            }
        }
        return tem;
    }
};