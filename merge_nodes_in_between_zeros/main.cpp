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
    ListNode* mergeNodes(ListNode* head) {
        ListNode* cur = head;
        ListNode* temp = head->next;
        
       while(temp != NULL) {
           
           if(temp->val != 0) {
               cur->val += temp->val;
               temp = temp->next;
               cur->next = temp;
           } else if (temp->next != NULL){
               cur = cur->next;
               temp = temp->next;
           } else {
                cur->next = NULL;
               temp = NULL;
               }
            }
        
        cout << cur->val << endl;
        return head;
    }
};
