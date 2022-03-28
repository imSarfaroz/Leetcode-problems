class Solution {
    func twoOutOfThree(_ nums1: [Int], _ nums2: [Int], _ nums3: [Int]) -> [Int] {
        var set1 = Set(nums1)
        var set2 = Set(nums2)
        var set3 = Set(nums3)
        
        var firstInter = set1.intersection(set2)
        var secondInter = set2.intersection(set3)
        var thirdInter = set1.intersection(set3)
        
        return Array(firstInter.union(secondInter).union(thirdInter))
    }
}