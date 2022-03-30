// Brute Force

class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
        map<string, int> mp1;
        map<string, int> mp2;
        int count = 0;
        
        for(auto& word:words1){
            mp1[word]++;
        }
        
        for(auto& word:words2){
            mp2[word]++;
        }
        
        for(auto it = mp1.begin(); it != mp1.end(); it++) {
            for(auto it2 = mp2.begin(); it2 != mp2.end(); it2++) {
                if(it->first == it2->first && it->second == it2->second) {
                    count++;
                }
            }
        }
        return count;
    }
};