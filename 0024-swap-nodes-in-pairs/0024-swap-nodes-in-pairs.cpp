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
    ListNode* swapPairs(ListNode* head) {
        
        ListNode* node = new ListNode(0,head);
        ListNode* cur = node;

        while(cur->next && cur->next->next){

            ListNode* tmp = cur->next->next->next;
            ListNode* p = cur->next;

            cur->next = p->next;
            cur->next->next = p;

            p->next = tmp;

            cur = cur->next->next;

        };

        return node->next;

    }
};