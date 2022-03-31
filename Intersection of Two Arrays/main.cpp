class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int> st1, st2;
        for(auto& i: nums1) {
            st1.insert(i);
        }
        for(auto& j: nums2) {
            st2.insert(j);
        }
        
        unordered_map<int, int> mp;
        for(auto& num: st1){
            mp[num]++;
        }
        for(auto& num: st2){
            mp[num]++;
        }
        
        vector<int> v;
        for(auto& m: mp) {
            if(m.second == 2) {
                v.push_back(m.first);
            }
        }
        return v;
    }
};



class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> st(nums1.begin(), nums1.end());
        
        vector<int> v;
        for(auto& num: nums2) {
            if(st.count(num) == true) {
                v.push_back(num);
                st.erase(num);
            }
        }
        return v;
    }
};