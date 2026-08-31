// 2058. Find the Minimum and Maximum Number of Nodes Between Critical Points
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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        vector<int> result = {-1, -1};
        int mindist = INT_MAX;
        ListNode* previousNode = head;
        ListNode* curr = head->next;
        int currIndex = 1;
        int prevCriticalIdx = 0, firstCriticalIdx = 0;
        
        while(curr->next != nullptr){
            if((curr->val < previousNode->val && curr->val < curr->next->val) || (curr->val > previousNode->val && curr->val > curr->next->val)){
                if(prevCriticalIdx == 0){
                    prevCriticalIdx = currIndex;
                    firstCriticalIdx = currIndex;
                }
                else{
                    mindist = min(mindist, currIndex - prevCriticalIdx);
                    prevCriticalIdx = currIndex;
                }
            }
            currIndex++;
            previousNode = curr;
            curr = curr -> next;
        }
        if(mindist != INT_MAX){
            int maxdist = prevCriticalIdx - firstCriticalIdx;
            result = {mindist, maxdist};
        }
        return result;
    }
};