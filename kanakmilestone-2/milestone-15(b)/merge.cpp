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
        ListNode *head1,*ptr,*head2,*head;
       if(l1==NULL&&l2==NULL)
           return l1;
        head1=NULL;
        head2=NULL;
        if(l1==NULL)
            return l2;
    
        head1=l1;
        if(l2==NULL)
            return l1;
        head2=l2;
        
        if(head1->val > head2->val)
        {
            head=head2;
            head2=head2->next;
        }else
        {   head=head1;
            head1=head1->next;
        }
        ptr=head;
        while(head1!=NULL&&head2!=NULL)
        {
             if(head1->val>head2->val)
            {
                ptr->next=head2;
                     ptr=ptr->next;
                head2=head2->next;
            }else
            {   ptr->next=head1;
             ptr=ptr->next;
                head1=head1->next;
            }
            
        }
        while(head1!=NULL)
        { ptr->next=head1;
         ptr=ptr->next;
            head1=head1->next;
            
        }
        while(head2!=NULL)
        {
             ptr->next=head2;
                 ptr=ptr->next;
            head2=head2->next;
        }
        return head;
    }
};
