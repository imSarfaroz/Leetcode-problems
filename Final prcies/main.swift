class Solution {
    func finalPrices(_ prices: [Int]) -> [Int] {
        var copyOfPrices = prices
        
        for i in 0..<prices.count{
            for j in i+1..<prices.count {
                if(copyOfPrices[j] <= copyOfPrices[i]) {
                    copyOfPrices[i] -= copyOfPrices[j]
                    break
                }
            }
        }
        return copyOfPrices
    }
}