class Solution {
public:
    int lengthOfLastWord(string s) {
        int count = 0;
        
        for(int i = s.length()-1; i >= 0; i--) {
            if(s[i] != ' ') {
                count++;
            } else if (count > 0) {
                return count;
            }
        }
        return count;
    }
};


class Solution {
public:
    int lengthOfLastWord(string s) {
        stringstream ss(s);
        string word;

        while(ss) {
            ss >> word;
        }

        //cout << ss.str() << word << endl;
        return word.length();
    }
};