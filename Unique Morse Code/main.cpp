class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        
        vector<string> symbols = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        
        set<string> arrays;
        
        for(auto word: words) {
            string tem = "";
            for(auto ch: word) {
                tem += symbols[ch - 'a'];
            }
            arrays.insert(tem);
        }
        return arrays.size();
    }
};