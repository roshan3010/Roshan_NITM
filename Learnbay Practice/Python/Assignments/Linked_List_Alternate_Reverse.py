'''
3. Linked List reverse and alternate merge
Input : 1 -> 2 -> 3 -> 4 -> 5 -> 6
Output: 1 -> 6 -> 2 -> 5 -> 3 -> 4

'''

class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

class LinkedList:
    def __init__(self, first_ptr):
        self.head = first_ptr

    def my_print(self):
        temp = self.head
        while (temp != None):
            if temp.next:
                print(temp.data,"-> ",end="")
            else:
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


def alternate_reverse_linked_list(linked_list_updated):
    print("list after mid reverse ")
    temp=linked_list_updated.head
    while (temp != None):
        if temp.next:
            print(temp.data,"-> ",end="")
        else:
            print(temp.data)
        temp = temp.next
# Breaking list into two halves
    ptr1=linked_list_updated.head
    ptr2=linked_list_updated.head
    while(ptr2.next and ptr2.next.next):
        ptr1=ptr1.next
        ptr2=ptr2.next.next

    ptr2=ptr1.next
    ptr1.next=None

    ptr1=linked_list_updated.head

# ptr1 points to first harlf head pointer and ptr2 points to second half head pointer
    print("==========")
    print("list after breaking into two half lists")
    temp=ptr1
    while (temp != None):
        if temp.next:
            print(temp.data,"-> ",end="")
        else:
            print(temp.data)
        temp = temp.next

    temp=ptr2
    while (temp != None):
        if temp.next:
            print(temp.data,"-> ",end="")
        else:
            print(temp.data)
        temp = temp.next

#Merging two lists into one list alternatively
    print("==========")
    print("list after rearragement !!!")
    while(ptr1 or ptr2):
        temp1=ptr1.next
        ptr1.next=ptr2
        temp2=ptr2.next
        ptr2.next=temp1
        ptr1=ptr2.next
        ptr2=temp2

    #ptr1.next=ptr2

    temp=linked_list_updated.head
    while (temp != None):
        if temp.next:
            print(temp.data,"-> ",end="")
        else:
            print(temp.data)
        temp = temp.next


n1 = Node(1)
n2 = Node(2)
n3 = Node(3)
n4 = Node(4)
n5 = Node(5)
n6 = Node(6)
#n7 = Node(7)


linked_list = LinkedList(n1)
n1.next = n2
n2.next = n3
n3.next = n4
n4.next = n5
n5.next = n6
#n6.next = n7

#linked_list.my_print()
list_len=linked_list.my_len()
print("List length : ",list_len)
print("==========")
print("original list")
linked_list.my_print()
linked_list.reverse_linked_list(list_len//2)
#print(linked_list.my_len())
#l2 = linked_list.reverse_linked_list(2)
#linked_list.my_print()
print("==========")
alternate_reverse_linked_list(linked_list)
print("===================================")
