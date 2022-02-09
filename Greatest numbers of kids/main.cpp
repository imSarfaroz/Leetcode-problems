#inlcude <iostream>

using namespace std;

class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        
        int maxElem = *max_element(candies.begin(), candies.end());
        vector<bool> arr;
        
        for(int i = 0; i < candies.size(); i++){
            if((candies[i] + extraCandies) >= maxElem) {
                arr.push_back(true);
            } else {
                arr.push_back(false);
            }
        }
        return arr;
    }
};