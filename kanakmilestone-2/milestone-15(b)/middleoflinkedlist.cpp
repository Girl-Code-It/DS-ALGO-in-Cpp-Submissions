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
        struct ListNode* ptr1;
        struct ListNode* ptr2;
        ptr1=head;
        ptr2=head;
        while(ptr2!=NULL&&ptr2->next!=NULL)
        {
            ptr1=ptr1->next;
            ptr2=ptr2->next->next;
        }
        return ptr1;
    }
};
