lists = [[1,4,5],[1,3,4],[2,6]]

class Node:
    def __init__(self,data):
        self.data=data
        self.next=None

class linked_list:
    def __init__(self,first_ptr):
        self.head=first_ptr

    def my_print(self):
        temp=self.head
        if temp.next==None:
            print("single node list : ", temp.data, "-> NULL")

        else:
            while(temp!=None):
                print(temp.data,"-> ",end="")
                temp=temp.next

        print("NULL")

    # def merge_K_sorted_list(self,LLA):



n1=Node(1)
n2=Node(2)
n3=Node(3)
n4=Node(4)
n5=Node(5)

n1.next=n2
n2.next=n3
n3.next=n4
n4.next=n5

obj=linked_list(n1)
obj.my_print()
