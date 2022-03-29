class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int,int> mp;
        int tem = 0;
        
        for(auto& n: arr){
            mp[n]++;
        }
        
        set<int> st;
        for(auto& i: mp){
            st.insert(i.second);
        }
        
        return mp.size() == st.size();

    }
};