class treeNode:
    def __init__(self,data):
        self.data=data
        self.left=None
        self.right=None

class Tree:
    def __init__(self):
        self.root=None


    def pre_order(self, root):
        if root is None:
            return
        self.pre_order(root.left)
        self.pre_order(root.right)
        print(root.data," ", end="")


tree=Tree()
n1=treeNode(1)
n2=treeNode(2)
n3=treeNode(3)
n4=treeNode(4)
n5=treeNode(5)
n6=treeNode(6)
n7=treeNode(7)


tree.root=n1
n1.left=n2
n1.right=n3
n2.left=n4
n2.right=n5
n3.left=n6
n3.right=n7

tree.pre_order(tree.root)
