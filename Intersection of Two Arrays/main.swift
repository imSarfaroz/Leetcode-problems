class Solution {
    func intersection(_ nums1: [Int], _ nums2: [Int]) -> [Int] {
        var st = Set(nums1)
        var st2 = Set(nums2)
        
        var arr = [Int]()
        for num in st {
            if(st2.contains(num)) {
                arr.append(num)
            }
        }
        return arr
    }
}


class Solution {
    func intersection(_ nums1: [Int], _ nums2: [Int]) -> [Int] {
        var st = Set(nums1)
        var st2 = Set(nums2)
        
        return Array(st.intersection(st2))
    }
}