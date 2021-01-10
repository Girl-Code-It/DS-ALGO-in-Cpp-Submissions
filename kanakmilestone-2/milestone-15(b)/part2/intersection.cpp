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
    ListNode *getIntersectionNode(ListNode *head1, ListNode *head2) {
        struct ListNode* ptr1, *ptr2;
        ptr1=head1;
        ptr2=head2;
         int k=0,count=0;
    while(ptr1!=NULL)
    {
        ptr1=ptr1->next;
        count++;
    }
    while(ptr2!=NULL)
    {
        ptr2=ptr2->next;
        k++;
    }
    ptr1=head1;
    ptr2=head2;
    if(k>count){
        k=k-count;
        for(count=0;count<k;count++)
        ptr2=ptr2->next;
    }else if(count>k){
        count=count-k;
        for(k=0;k<count;k++)
        ptr1=ptr1->next;
    }
    while(ptr1!=NULL)
    {
        if(ptr1==ptr2)
        {
           return ptr1;
        }else
        {
            ptr1=ptr1->next;
            ptr2=ptr2->next;
        }
    }
return NULL;

    }   
};
