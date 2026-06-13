class Solution {
public:
    vector<int> LLTraversal(ListNode *head) {
        ListNode* temp = head;
        vector<int> ans;

        while(temp != nullptr){
            ans.push_back(temp->data);
            temp = temp->next;
        }
        return ans;
    }
};