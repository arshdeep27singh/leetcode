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
        
        if(head == NULL || head->next == NULL) return head;
        if(head->next->next == NULL) return head->next;
        
        ListNode* curr = head->next;
        ListNode* prev = head;
        
        while(curr != NULL){
            
            curr = curr->next;
            if(curr != NULL) curr = curr->next;
            prev = prev->next;
            
        }
        return prev;
    }
};