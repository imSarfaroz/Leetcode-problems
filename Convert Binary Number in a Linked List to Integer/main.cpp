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
    int getDecimalValue(ListNode* head) {
        ListNode *prt = head;
        int count = 0;
        
        while(ptr!=nullptr){
            ptr=ptr->next;
            c++;
        }
        
        ptr = head;
        int dec = 0;
        while(ptr!=nullptr){
            c--;
            if(ptr->val==1){
                dec+=row(2, c);
            }
            ptr = ptr->next
        }
        
        return dec;
    }
};