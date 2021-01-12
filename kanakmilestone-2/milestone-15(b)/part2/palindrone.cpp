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
    ListNode* removeElements(ListNode* head, int val) {
              struct ListNode* ptr,*ptr2;
        ptr=head;
        if(head!=NULL)
        ptr2=head->next;
        else
        {ptr2=NULL;
         return NULL;
        }
        while(head!=NULL&&ptr->val==val)
        {head=head->next;
        ptr->next=NULL;
         ptr=head;
        }
        if(head==NULL)
            return NULL;
        ptr2=ptr->next;
        while(ptr2!=NULL)
        {
            if(ptr2->val==val)
            {
                ptr->next=ptr2->next;
                ptr2->next=NULL;
                ptr2=ptr->next;
                
            }else{
                ptr=ptr->next;
                ptr2=ptr->next;
               
            }
        }
        return head;
    }
};
