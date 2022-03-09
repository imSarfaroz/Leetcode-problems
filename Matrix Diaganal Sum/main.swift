class Solution {
    func diagonalSum(_ mat: [[Int]]) -> Int {
        var size:Int = mat.count
        
        var sumOfDiag1:Int = 0
        var sumOfDiag2:Int = 0
        
        for i in 0..<size {
            sumOfDiag1+=mat[i][i]
            sumOfDiag2+=mat[i][size - i - 1]
        }
        if size % 2 == 1 {
            return sumOfDiag1 + sumOfDiag2 - mat[size/2][size/2]
        } else {
            return sumOfDiag1 + sumOfDiag2
        }
    }
}