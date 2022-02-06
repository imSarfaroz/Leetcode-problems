#include <iostream>

class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int size = operations.size();
        int count = 0;
        for(int i = 0; i < size; i++){
            if(operations[i] == "++X" || operations[i] == "X++"){
                count++;
            }else{
                count--;
            }
        }
        return count;
    }
};