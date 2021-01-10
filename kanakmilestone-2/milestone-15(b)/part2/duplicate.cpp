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
    ListNode* deleteDuplicates(ListNode* head) {
        struct ListNode* ptr,*ptr2;
        ptr=head;
        if(head!=NULL)
        ptr2=head->next;
        else
            ptr2=NULL;
        while(ptr2!=NULL)
        {
            if(ptr->val==ptr2->val)
            {
                ptr->next=ptr2->next;
                if(ptr2->next!=NULL)
                ptr2->next=NULL;
                ptr2=ptr->next;
            }else{
                ptr=ptr->next;
                ptr2=ptr2->next;
            }
        }
        return head;
    }
};
