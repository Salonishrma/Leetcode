class Solution {
public:

    ListNode* reverseList(ListNode* head) {
     ListNode* prev=NULL;
     ListNode* curr=head;
     ListNode* next_p;  
     while(curr!=NULL){
     next_p=curr->next;
     curr->next=prev;
     prev=curr;
     curr=next_p;
     }
     head=prev;
     return head;
    }
};
