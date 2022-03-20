class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        int size = prices.size();
        vector<int> result;
        
        for(int i = 0; i < size; i++) {
            int value = 0;
            for(int j = i + 1; j < size; j++) {
                if(prices[j] <= prices[i]) {
                    value = prices[j];

                    break;
                } 
            }
            result.push_back(prices[i] - value);
        }
        return result;
    }
};

// OR

