class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        map<int, int> dictionary;
        int count = 0;
        
        for(auto stone: stones){
            dictionary[stone]++;
        }
        
        for(auto jewel:jewels) {
            count = count + dictionary[jewel];
        }

        return count;
    }
};

class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_set<char> st(jewels.begin(), jewels.end());
        int count = 0;
        
        for(auto stone: stones){
            count+= st.count(stone);    
        }
        
        return count;
    }
};