static int x = []() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  return 0;
}();
class Solution {
public:
    string makeFancyString(string s) {
        string res;
        res.reserve(s.size());
        int curr = 1;
        res.push_back(s[0]);
        for(int i =1;i<s.size();i++){
            if(s[i]==s[i-1]) curr++;
            else curr = 1;
            if(curr<3){
                res.push_back(s[i]);
            }
        }
        return res;
    }
};
