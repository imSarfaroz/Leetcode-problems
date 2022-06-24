class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        
        int size = paths.size();
        map<string, int> mp;
        
        for(int i = 0; i < size; i++) {
            mp[paths[i][0]]++;
        }
        
        for(int i = 0; i < size; i++) {
            if(mp[paths[i][1]] < 1) {
                return paths[i][1];
            }
        }
        
        return "";
    }
};
