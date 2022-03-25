class Solution {
public:
    string intToRoman(int num) {
        map<int, string> mp ={
        {1, "I"},
        {5, "V"},
        {10, "X"},
        {50, "L"},
        {100, "C"},
        {500, "D"},
        {1000, "M"},
        {4, "IV"},
        {9, "IX"},
        {900, "CM"},
        {400, "CD"},
        {90, "XC"},
        {40, "XL"}
        };
        
        string count = "";
        
        for(auto it = mp.rbegin(); it != mp.rend(); it++) {
            while(num >= it->first) {
                num-=it->first;
                count += it->second;
            }
        } 
        return count;
    }
};