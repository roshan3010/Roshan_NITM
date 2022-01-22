# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def printList(self, l:Optional[ListNode]) -> Optional[ListNode]:
        while l:
            print(l.val," ", end="")
            l=l.next

    def helper(self, list1: Optional[ListNode], list2: Optional[ListNode]) -> Optional[ListNode]:
        dummy = ListNode()
        temp=dummy
        #print(list1.val, list2.val)
        while list1 and list2:
            if list1.val < list2.val:
                temp.next = list1
                list1=list1.next
            else:
                temp.next = list2
                list2=list2.next

            temp=temp.next

        if list1:
            temp.next=list1
        elif list2:
            temp.next=list2

        return dummy.next


    def mergeKLists(self, lists: List[Optional[ListNode]]) -> Optional[ListNode]:
        i=0
        #print(len(lists))
        if len(lists)==0:
            return None
        dummy = lists[0]
        print(dummy)
        while  i<len(lists)-1:
            #print("check")
            dummy = self.helper(dummy, lists[i+1])
            #self.printList(dummy)
            print()
            i+=1
        return dummy
