#include <iostream>

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
        long long reverse = 0;
        int num = 0;
        int tem = x;
        while(x > 0){
            reverse = reverse * 10 + x % 10;
            x = x / 10;
        }
        return reverse == tem;
    }


// class Solution {
// public:
//     bool isPalindrome(int x) {
//         long long reverse = 0;
//         int num = 0;
//         int tem = x;
//         while(x > 0){
//             reverse = reverse * 10 + x % 10;
//             x = x / 10;
//         }
//         return reverse == tem;
//     }
// };