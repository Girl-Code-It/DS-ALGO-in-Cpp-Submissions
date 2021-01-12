/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {
        struct ListNode* pre;
        struct ListNode* end;
        pre=node;
       int num=pre->val;
        pre->val=node->next->val;
        node->next->val=num;
        end=node->next;
        pre->next=end->next;
        end->next=NULL;
    }
};
