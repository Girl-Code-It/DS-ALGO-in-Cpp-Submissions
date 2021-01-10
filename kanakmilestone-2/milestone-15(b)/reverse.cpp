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
    ListNode* reverseList(ListNode* head) {
        ListNode *ptr;
           ListNode *temp,*temp2;
        if(head!=NULL)
        {
        temp=head;
        ptr=NULL;
        
        if(head->next!=NULL)
        {
        ptr=head->next;
        temp->next=NULL;
        }
        }
        else
            return head;
        while(ptr!=NULL)
        {
            temp2=ptr;
            ptr=ptr->next;
            temp2->next=temp;
            temp=temp2;
            head=temp;
        }
       
        return head;
    }
};
