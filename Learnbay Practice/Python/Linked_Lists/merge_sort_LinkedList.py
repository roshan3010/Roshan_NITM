class Node:
    def __init__(self, val):
        self.data = val
        self.next = None

def append_node(ll, val):
    if ll is None:
        ll = Node(val)
    else:
        temp = ll
        while temp.next:
            temp = temp.next
        temp.next = Node(val)

    return ll

class LinkedList:
    def __init__(self, first_ptr):
        self.head = first_ptr

    def my_print(self):
        temp = self.head
        while temp != None:
            temp = temp.next


    def merge(self, first, second):
        resultant = None

        if first == None:
            return second
        elif second is None:
            return first

        while first and second:
            if first.data <= second.data:
                resultant = append_node(resultant, first.data)
                first = first.next
            else:
                resultant = append_node(resultant, second.data)
                second = second.next

        while first is not None:
            resultant = append_node(resultant, first.data)
            first = first.next

        while second is not None:
            resultant = append_node(resultant, second.data)
            second = second.next

        return resultant

    def get_mid(self, head):
        # print("mid--")
        slow = head
        fast = head
        if head is None:
            return None
        while fast and fast.next:
            fast = fast.next.next
            if fast is not None:
                slow = slow.next

        return slow

    def merge_sort(self, head):
        #base condition
        if head is None or head.next is None:
            return head
        mid = self.get_mid(head)
        # print("data",mid.data)
        temp = mid.next
        mid.next = None
        lhalf = self.merge_sort(head)
        rhalf = self.merge_sort(temp)
        return self.merge(lhalf, rhalf)

n1 = Node(10)
n2 = Node(2)
n3 = Node(13)
n4 = Node(1)
n5 = Node(5)
n6 = Node(7)

linked_list = LinkedList(n1)
n1.next = n2
n2.next = n3
n3.next = n4
n4.next = n5
n5.next = n6

# linked_list.my_print()
linked_list = linked_list.merge_sort(linked_list.head)
while linked_list:
    print(linked_list.data)
    linked_list = linked_list.next

# print(linked_list.data)
# linked_list.my_print()
