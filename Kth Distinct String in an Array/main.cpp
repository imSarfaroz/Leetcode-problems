class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        map<string,int> mp;
        int count = 0;
        
        for(string& i: arr){
            mp[i]++;
        }
        
        for(string& j: arr) {
            if(mp[j] == 1) {
                k--;
            }
            if(k == 0) return j;
        }
        return "";
    }
};