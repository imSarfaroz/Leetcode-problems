class Solution {
public:
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
        set<int> st1, st2, st3;
        for(auto i: nums1){
            st1.insert(i);
        }
        for(auto i: nums2){
            st2.insert(i);
        }
        for(auto i: nums3){
            st3.insert(i);
        }
        
        unordered_map<int, int> mp;
        for(auto j: st1){
            mp[j]++;
        }
        for(auto j: st2){
            mp[j]++;
        }
        for(auto j: st3){
            mp[j]++;
        }
        vector<int> v;
        for(auto k: mp){
            if(k.second >= 2){
                v.push_back(k.first);
            }
        }
        return v;
    }
};


class Solution {
public:
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
        unordered_map<int, int> mp;
        for(auto& num: {nums1, nums2, nums3}){
            unordered_set<int> st(num.begin(), num.end());
            for(auto& i: st) ++mp[i];
        }
        vector<int> v;
        for(auto& j: mp) {
            if(j.second >= 2) {
                v.push_back(j.first);
            }
        }
        return v;
    }
};