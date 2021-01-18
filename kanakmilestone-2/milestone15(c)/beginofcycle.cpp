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
    ListNode *detectCycle(ListNode *head) {
        if(head==NULL)
            return NULL;
        struct ListNode *ptr1=head, *ptr2=head->next;
        while(ptr2!=NULL&&ptr2->next!=NULL&&ptr1!=ptr2)
        {
            ptr1=ptr1->next;
            ptr2=ptr2->next->next;
        }
        if(ptr2==NULL||ptr2->next==NULL)
            return NULL;
        else
        {
            ptr1=head;
            ptr2=ptr2->next;
            while(ptr1!=ptr2)
            {
                ptr1=ptr1->next;
                ptr2=ptr2->next;
            }
            return ptr1;
        }
    }
};
