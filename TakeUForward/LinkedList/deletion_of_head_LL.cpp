// Deletion of the head of LL
/*
Definition of singly linked list:
class ListNode{
  
  public:
    int data;
    ListNode *next;
    ListNode() : data(0), next(nullptr) {}
    ListNode(int x) : data(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : data(x), next(next) {}
};
*/
// struct ListNode{
//     int val;
//         ListNode *next;
//         ListNode(): val(0), next(nullptr){}
//         ListNode(int data1): val(data1), next(nullptr){}
//         ListNode(int data1, ListNode *next1): val(data1), next(next1){}
// };
class Solution {
public:
    ListNode* deleteHead(ListNode* &head) {
        //your code goes here
        if(head == nullptr)
        return nullptr;

        ListNode* temp = head;
        head = head -> next;
        delete temp;
        return head;
    }
};