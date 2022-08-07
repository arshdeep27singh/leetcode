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
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(!head) return NULL;
        
        ListNode* sizeChecker = head;
        for(int i=0; i<k; i++){
            if(sizeChecker == NULL) return head;
            sizeChecker = sizeChecker->next;
        }
        
        
        ListNode *next = NULL, *curr = head, *prev =  NULL;
        int count = 0;
        
        //reverse nodes in K group first
        while(curr != NULL && count < k){
            next = curr -> next;
            curr -> next = prev;
            prev = curr;
            curr = next;
            count++;
        }
        
        if(next)
            head->next = reverseKGroup(next, k);
        
        return prev;
    }
};