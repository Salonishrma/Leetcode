class Solution {
public:

    ListNode* reverseList(ListNode* head) {
    //create a dummy node 
    ListNode* dummy=NULL;
    while(head!=NULL){
        ListNode* next=head->next;
        head->next=dummy;
        dummy=head;
        head=next;
    }
     return dummy;   
    
    }
};
