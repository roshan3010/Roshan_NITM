class ListNode:
    def __init__(self, val=0, next=None, prev=None):
        self.val=val
        self.next=next
        self.prev=prev

    def


def list_insert(L, x):
    x.next=L.head
    if L.head !=None:
        L.head.prev=x
    L.head=x
    x.prev=None


def list_delete(L, x):
    if x.prev != None:
        x.prev.next=x.next
    else:
        L.head=x.next
    if x.next !=None:
        x.next.prev=x.prev

def list_search(L,k):
    x=L.head
    while x!=None and x.val!=k:
        x=x.next

    return x


n1=ListNode(1)
n2=ListNode(2)
n3=ListNode(3)
n4=ListNode(4)

n1.next=n2
n2.next=n3
n3.next=n4

list_insert(n1,5)
list_insert(n1,3)
list_insert(n1,0)

list_delete(n1,4)

list_search(n1,3)
