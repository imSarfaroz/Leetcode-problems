class Solution {
    func countGoodTriplets(_ arr: [Int], _ a: Int, _ b: Int, _ c: Int) -> Int {
        var count: Int = 0
        
        for k in 0..<arr.count {
            for j in 0..<k {
                for i in 0..<j {
                    if(abs(arr[i] - arr[j]) <= a && abs(arr[j] - arr[k]) <= b &&                                abs(arr[i] - arr[k]) <= c) {
                        count+=1
                    }
                }
            }
        }
        return count
    }
}