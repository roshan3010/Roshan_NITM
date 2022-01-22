# 0 1 1 ListNode{val: 2, next: ListNode{val: 4, next: None}} ListNode{val: 3, next: ListNode{val: 4, next: None}}
# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def mergeTwoLists(self, list1: Optional[ListNode], list2: Optional[ListNode]) -> Optional[ListNode]:
        list3 = ListNode()
