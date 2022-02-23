class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int size = arr.size();
        int sum = 0;
        
        for(int i = 0; i < size; i++){
            for(int j = 1; j <= size; j+=2) {
                if(i + j <= size) {
                    for(int k=0;k<j;k++){
                        sum+= arr[i+k];
                    }
                } else {
                    break;
                }
            }
        }
        return sum;
    }
};