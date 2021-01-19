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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        ListNode *ptr1,*ptr2,*ptr3,*head,*end;
        if(lists.empty())
            return NULL;
        head=lists[0];
       
        int k=lists.size();
        for(int i=1;i<k;i++)
        {
            ptr1=head;
            ptr2=lists[i];
            if(ptr1==NULL)
            {
                head=ptr2;
                continue;
            }else if(ptr2==NULL)
            {
                head=ptr1;
                continue;
            }else if(ptr1->val>=ptr2->val)
            {
                head=ptr2;
                ptr2=ptr2->next;
            }else
            {head=ptr1;
            ptr1=ptr1->next;
            }
            end=head;
            while(ptr1!=NULL&&ptr2!=NULL)
            {
                if(ptr1->val>=ptr2->val)
                {
                    end->next=ptr2;
                    end=end->next;
                    ptr2=ptr2->next;
                }else{
                    end->next=ptr1;
                    end=end->next;
                    ptr1=ptr1->next;
                }
            }
            while(ptr1!=NULL)
            {
                end->next=ptr1;
                ptr1=ptr1->next;
                end=end->next;
            }
            while(ptr2!=NULL)
            {
                end->next=ptr2;
                ptr2=ptr2->next;
                end=end->next;
            }
          
        }
        return head;
    }
};
