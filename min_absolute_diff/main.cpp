class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        int size = arr.size();
        
        sort(arr.begin(), arr.end());
        
        int minD = 1000000;
        for(int i = 1; i < size; i++) {
            minD = min(minD, arr[i] - arr[i-1]);
        }
        
        vector<vector<int>> v;
        
        for(int i = 1; i < size; i++) {
            if(arr[i] - arr[i-1] == minD) {
                v.push_back({arr[i-1], arr[i]});
            }
        }
        
        return v;
    }
};
