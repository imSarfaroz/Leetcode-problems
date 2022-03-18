class Solution {
public:
    int calPoints(vector<string>& ops) {
        vector<int> scores;
        
        for(int i = 0; i < ops.size(); i++) {
            if(ops[i] == "C"){
                scores.pop_back();
            } else if (ops[i] == "D") {
                scores.push_back(2*scores.back());
            } else if (ops[i] == "+") {
                scores.push_back(scores.back()+scores[scores.size()-2]);
            } else { // numbers
                scores.push_back(stoi(ops[i]));
            }
        }
        return accumulate(scores.begin(), scores.end(), 0);
    }
};