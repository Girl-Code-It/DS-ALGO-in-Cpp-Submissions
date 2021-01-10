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
    bool hasCycle(ListNode *head) {
        struct ListNode* ptr, *ptr2;
        ptr=head;
        if(ptr!=NULL)
        ptr2=head->next;
        else
            ptr2=NULL;
        while(1)
        {
            if(ptr2==NULL||ptr==NULL)
                return false;
            else
            {   if(ptr==ptr2)
                return true;
                ptr=ptr->next;
             if(ptr2->next!=NULL)
                ptr2=ptr2->next->next;
             else
                 ptr2=NULL;
            }
        }
        
    }
};
