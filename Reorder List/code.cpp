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
    void reorderList(ListNode* head) {
        if(head==NULL|| head->next==NULL){
            return;
        }
        vector<ListNode*>v1;
        ListNode* temp=head;
        while(temp!=nullptr){
            v1.push_back(temp);
            temp=temp->next;
        }
        int i=0;
        int j=v1.size()-1;
        while(i<j){
            v1[i]->next=v1[j];
            i++;
            if(i==j){
                break;
            }
            else{
                v1[j]->next=v1[i];
                j--;
            }
        }
        v1[i]->next=nullptr;
    }
};
