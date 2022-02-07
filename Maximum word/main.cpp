#include <iostream>

class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int size = sentences.size();
        int max = 0;
        for(int i = 0; i < size; i++){
            int count = 0;
            for(int j = 0; j < sentences[i].size(); j++){
                if(sentences[i][j] == ' '){
                    count++;
                }
            }
            if(count > max){
                max = count;
            }
        }
        return max + 1;
    }
};