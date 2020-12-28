class Solution {
public:
    bool isPalindrome(ListNode* head) {
        vector<int>tab;
        ListNode* p;
        p=head;
        while(p!=nullptr){
            tab.push_back(p->val);
            p=p->next;
        }
        int n=tab.size();
        for(int i=0;i<n/2;i++){
            if(tab[i]!=tab[n-i-1])return false;
        }
        return true;
    }
};
