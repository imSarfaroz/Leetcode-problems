class Solution {
    func rotate(_ nums: inout [Int], _ k: Int) {
        if k == 0 || nums.count == 0 {return}
        
        for _ in 1...k {
            let lastItem = nums.last
            nums.removeLast()
            if let lastItem = lastItem {
                nums.insert(lastItem, at: 0)
            }
        }
    }
}
