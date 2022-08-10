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
    
private:
    ListNode* getMiddle(ListNode* head){
        
        ListNode* slow = head, *fast = head->next;
        
        while(fast != nullptr && fast->next!= nullptr){
            fast = fast->next->next;
            slow = slow->next;
        }
        
        return slow;
    }
    
    ListNode* reverse(ListNode* head){
        
        ListNode* curr = head, *prev = nullptr, *next = nullptr;
        while(curr != nullptr){
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
    
    
public:
    bool isPalindrome(ListNode* head) {
        
        if(head->next == NULL) return true;
        
        //1st approach using linkedlist to array and then check
        /*
        vector<int> list;
        ListNode* temp = head;
        while(temp){
            list.push_back(temp->val);
            temp = temp->next;
        }
        
        int left = 0, right = list.size()-1; 
        while(left <= right){
            if(list[left] != list[right])
                return false;
            left++;
            right--;
        }
        return  true;
        */
        
        // 2nd approach
        
        //step 1
        ListNode* middle = getMiddle(head);
        
        //step 2
        ListNode* temp = middle->next;
        middle->next = reverse(temp);
        
        //step 3
        ListNode* head1 = head;
        ListNode* head2 = middle->next;
        
        while(head2 != nullptr){
            if(head1->val != head2->val) return false;
            
            head1 = head1->next;
            head2 = head2->next;
        }
        
        //step 4 - repeat step 2
        temp = middle->next;
        middle->next = reverse(temp);
        
        return true;
    }
};