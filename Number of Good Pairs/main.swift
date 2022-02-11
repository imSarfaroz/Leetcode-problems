import UIKit

class Solution {
    func numIdenticalPairs(_ nums: [Int]) -> Int {
        var goodPairsCounter = 0
        for i in 0..<nums.count {
		for j in (i + 1)..<nums.count where (nums[i] == nums[j]) {
			goodPairsCounter += 1
		}
	}
	return goodPairsCounter
    }
}