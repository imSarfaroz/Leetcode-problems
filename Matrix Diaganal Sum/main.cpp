class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int size = mat.size();
        
        int sumOfDiag1 = 0;
        int sumOfDiag2 = 0;
        
        for(int i = 0; i < size; i++) {
            sumOfDiag1+= mat[i][i];
            sumOfDiag2+= mat[i][size - i - 1];
        }
        
        if(size % 2 == 1) 
            return sumOfDiag1 + sumOfDiag2 - mat[size/2][size/2];
        
        return sumOfDiag1 + sumOfDiag2;
    }
};