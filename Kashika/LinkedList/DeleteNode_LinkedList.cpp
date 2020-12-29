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
   void deleteNode(ListNode* node) {
        ListNode* temp;
        int data;
        
        while(node->next!=0){
            data = node->val;                         
            node->val = node->next->val; ;               
            node->next->val = data;;                     
            temp = node; ;                               
            node = node->next;                           
        }
        
        temp->next = 0;                                   
        delete node;                                      
    }
};
