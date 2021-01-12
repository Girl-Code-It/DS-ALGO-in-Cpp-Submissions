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
        struct ListNode *ptr1, *ptr2,*ptr3,*ptr4;
        ptr1=head;
        if(ptr1==NULL||ptr1->next==NULL)
            return ptr1;
       ptr2=ptr1->next;
        ptr3=ptr2->next;
        ptr2->next=ptr1;
        ptr1->next=ptr3;
        head=ptr2;
         while(ptr3!=NULL)
         {
        ptr4=ptr1;
        ptr1=ptr3;
        ptr2=ptr1->next;
             if(ptr2==NULL)
                 return head;
        ptr3=ptr2->next;
             
        
        ptr2->next=ptr1;
        ptr1->next=ptr3;
             ptr4->next=ptr2;
         }
         return head;   
        }
    
};
