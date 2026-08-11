# Traversal in Linked List
# Definition of singly linked list:
# class ListNode:
#     def __init__(self, x=0, next=None):
#         self.data = x
#         self.next = next

class Solution:
    def LLTraversal(self, head):
      """
        :type head: Optional[ListNode]
        :rtype: List[Integer]
      """
      temp = head
      ans = []
      while temp is not None:
        ans.append(temp.data)
        temp = temp.next
      return ans