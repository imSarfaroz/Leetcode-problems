#include <iostream>
#include <algorithm>

using namespace std;

bool isPalindrome(int x);

int main()
{
    int x;
   cin >> x;
   if(isPalindrome(x)){
   cout << "true";
   }else{
   cout << "false";
   }
}

 bool isPalindrome(int x) {
        string str = to_string(x);
        string tem = to_string(x);
        reverse(str.begin(), str.end()); 
        return str == tem;
}


// class Solution {
// public:
//     bool isPalindrome(int x) {
//         string str = to_string(x);
//         string tem = to_string(x);
//         reverse(str.begin(), str.end()); 
//         return str == tem;
//     }
// };