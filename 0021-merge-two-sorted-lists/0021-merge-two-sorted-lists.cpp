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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        
        ListNode* head = new ListNode(0);
        ListNode* cur = head;

        while(l1 && l2){

            if(l1->val <= l2->val){
                ListNode* node = new ListNode(l1->val);
                cur->next = node;
                cur = cur->next;
                l1 = l1->next;
            }
            else{
                ListNode* node = new ListNode(l2->val);
                cur->next = node;
                cur = cur->next;
                l2 = l2->next;
            };

        };

        while(l1){
            ListNode* node = new ListNode(l1->val);
            cur->next = node;
            l1 = l1->next;
            cur = cur->next;
        };

         while(l2){
            ListNode* node = new ListNode(l2->val);
            cur->next = node;
            l2 = l2->next;
            cur = cur->next;
        };

        return head->next;

    }
};