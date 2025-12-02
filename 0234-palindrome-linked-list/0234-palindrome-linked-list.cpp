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
    bool isPalindrome(ListNode* head) {
        
        if(head == nullptr || head->next == nullptr){
            return true;
        };

        ListNode* fast = head;
        ListNode* slow = head;

        while(fast->next && fast->next->next){
            slow = slow->next;
            fast = fast->next->next;
        };

        ListNode* second = slow->next;
        slow->next = nullptr;
        //

        ListNode* dummy = new ListNode();
        dummy->next = second;

        ListNode* beg = second;
        ListNode* end = second->next;

        while(end != nullptr){
            beg->next = end->next;
            end->next = dummy->next;
            dummy->next = end;
            end = beg->next;
        };

        ListNode * p = head;
        ListNode * q = dummy->next;
        while(p && q){
            if(p->val != q->val){
                return false;
            };
            p = p->next;
            q = q->next;
        };
        return true;
    }
};