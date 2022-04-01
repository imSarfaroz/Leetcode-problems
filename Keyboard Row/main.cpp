class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        set<int> st1 = {'q','w','e','r','t', 'y','u','i','o','p'};
        set<int> st2 = {'a','s','d','f','g','h','j','k','l'};
        set<int> st3 = {'z','x','c','v','b','n','m'};
        
        vector<string> answer;
        for(auto& word: words) {
            
            int count = 0;
            vector<int> temp{0, 0, 0};
            for(auto& ch: word) {
                char ch1 = tolower(ch);
                if(st1.find(ch1) != st1.end()) temp[0]++;
                if(st2.find(ch1) != st2.end()) temp[1]++;
                if(st3.find(ch1) != st3.end()) temp[2]++;
            }
            for(auto& c: temp) if(c) count++;
            if (count == 1) answer.push_back(word);
        }
        
        return answer;
    }
};