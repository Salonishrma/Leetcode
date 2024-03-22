class Solution {
public:
    bool isPalindrome(ListNode* head) {
        ListNode* temp = head;
        std::stack<int> s1;
        
        while (temp != nullptr) {
            s1.push(temp->val);
            temp = temp->next;
        }
        
        temp = head;
        while (temp != nullptr) {
            if (s1.top() == temp->val) {
                s1.pop();
                temp = temp->next;
            } else {
                return false;
            }
        }
        
        return true;
    }
};
