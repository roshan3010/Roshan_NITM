class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

class LinkedList:
    def __init__(self, first_ptr):
        self.head = first_ptr

    def my_print(self):
        temp = self.head
        while temp != None:
            print(temp.data)
            temp = temp.next

    def my_len(self):
        temp=self.head
        count=0
        while(temp!=None):
            count+=1
            temp=temp.next

        return count

    def reverse_linked_list(self,k):
        k1=list_len-k-1
        pl = None
        # no node
        pc = self.head
        if pc == None:
            return None

        pr = self.head.next
        # single node
        if pr == None:
            return self.head


        while(k1>0 and pc!=None):
            pc=pc.next
            k1-=1

        temp=pc
        pc = pc.next
        pr=pc.next

        while pc != None:
            # reversing logic
            pc.next = pl
            pl = pc
            pc = pr
            if pr is None:
                break
            pr = pr.next


        temp.next=pl



n1 = Node(1)
n2 = Node(2)
#n3 = Node(3)
#n4 = Node(4)
# n5 = Node(5)
# n6 = Node(6)
# n7 = Node(7)

linked_list = LinkedList(n1)
n1.next = n2
#n2.next = n3
#n3.next = n4
# n4.next = n5
# n5.next = n6
# n6.next = n7
#linked_list.my_print()
list_len=linked_list.my_len()
print(list_len//2)
print("==========")
linked_list.reverse_linked_list(list_len//2 + 1)
#print(linked_list.my_len())
#l2 = linked_list.reverse_linked_list(2)
linked_list.my_print()
