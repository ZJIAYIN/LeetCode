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
    ListNode* reverseList(ListNode* head) {
        
        if(head == nullptr){
            return head;
        };

        ListNode* first = new ListNode();
        first->next = head;

        ListNode* beg = head;
        ListNode* end = head->next;

        while(end != nullptr){
            
            ListNode* tmp = end->next;
            beg->next = tmp;
            end->next = first->next;
            first->next = end;
            end = beg->next;

        };

        return first->next;
    }
};