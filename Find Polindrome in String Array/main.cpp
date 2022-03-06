class Solution {   
    bool isPolindrome(string &str) {
        int i = 0;
        int j = str.size() - 1;
        
        while(i < j && str[i] == str[j]) i++, j--;
        return i >= j;
    }
    
public:
    string firstPalindrome(vector<string>& words) {
        for(auto &str: words) {
            if(isPolindrome(str)) {
                return str;
            }
        }
        return "";
    }
};
