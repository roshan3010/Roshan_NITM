class Node:
    def __init__(self,data):
        self.data=data
        self.next=None

class Linked_list:
    def __init__(self,head):
        self.head=head


    def my_print(self):
        temp=self.head
        while(temp!=None):
            print(temp.data,"->",end='')
            temp=temp.next


n1=Node(1)
n2=Node(2)
n3=Node(3)
n4=Node(4)
n5=Node(5)


n1.next=n2
n2.next=n3
n3.next=n4
n4.next=n5


linked_list=Linked_list(n1)
linked_list.my_print()
