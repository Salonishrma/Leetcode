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
    ListNode* removeNodes(ListNode* head) {
        ListNode* current = head;
        stack<ListNode*>s1;
        while(current){
            while(!s1.empty() && s1.top()->val < current->val){
                s1.pop();
            }
            s1.push(current);
            current=current->next;
        }
        ListNode* nxt = NULL;
        while(!s1.empty()){
            current=s1.top();
            s1.pop();
            current->next=nxt;
            nxt = current;
        }
        return current;
    }
};
