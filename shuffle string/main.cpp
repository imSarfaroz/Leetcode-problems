#include <iostream>

class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        int size = indices.size();
        
        string str = s;
        for(int i = 0; i < size; i++){
            str[indices[i]] = s[i];
        }
        return str;
    }
};


// class Solution {
// public:
//     string restoreString(string s, vector<int>& indices) {
//         int size = indices.size();
        
//         vector<char> v(s.begin(), s.end());
//         for(int i = 0; i < size; i++){
//             v[indices[i]] = s[i];
//         }
//         string str(v.begin(), v.end());
//         return str;
//     }
// };