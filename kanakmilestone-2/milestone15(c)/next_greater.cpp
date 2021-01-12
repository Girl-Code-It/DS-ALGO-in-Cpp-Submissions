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
    vector<int> nextLargerNodes(ListNode* head) {
        struct ListNode*ptr1,*ptr2;
        vector<int>result;
        ptr1=head;
        while(ptr1!=NULL)
        {
            ptr2=ptr1->next;
            while(ptr2!=NULL&&ptr2->val<=ptr1->val)
            {
                ptr2=ptr2->next;
            }
                        if(ptr2==NULL){
              result.push_back(0);
            }
            else
                result.push_back(ptr2->val);

            ptr1=ptr1->next;
        }
        return result;
    }
};

