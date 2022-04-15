/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        int length = 0;
        ListNode *temp = head;
        
        while(temp) {
            length++;
            temp = temp->next;
        }
        int half = length/2;
        
        while(half-- && head){
            head=head->next;
        }
        return head;
    }
};