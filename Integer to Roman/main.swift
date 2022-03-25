class Solution {
    func intToRoman(_ num: Int) -> String {
        let dict: KeyValuePairs = [
            1000: "M",
            900: "CM",
            500: "D",
            400: "CD",
            100: "C",
            90: "XC",
            50: "L",
            40: "XL",
            10: "X",
            9: "IX",
            5: "V",
            4: "IV",
            1: "I"
        ]
        
        var count:String = ""
        
        var digit = num
        for(val, letters) in dict {
            while digit >= val {
                digit-=val
                count+=letters
            }
        }
        return count
    }
}