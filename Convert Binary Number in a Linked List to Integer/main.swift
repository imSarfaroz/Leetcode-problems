/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     public var val: Int
 *     public var next: ListNode?
 *     public init() { self.val = 0; self.next = nil; }
 *     public init(_ val: Int) { self.val = val; self.next = nil; }
 *     public init(_ val: Int, _ next: ListNode?) { self.val = val; self.next = next; }
 * }
 */
class Solution {
    func getDecimalValue(_ head: ListNode?) -> Int {
        var currentNode = head
        var count:String = ""
        
        while(currentNode != nil){
            if let node = currentNode {
                count = count + String(node.val)
            }
            currentNode = currentNode?.next
        }
        return Int(count, radix:2)!
        
    }
}