class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
         if(head==NULL) return NULL;
         else if(head->val==val)
         {
             head=head->next;
             head=removeElements(head,val);
         }
         else
          head->next= removeElements(head->next,val);
            return head;
    }
};
