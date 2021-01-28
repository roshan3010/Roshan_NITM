class treeNode:
    def __init__(self,data):
        self.data=data
        self.left=None
        self.right=None

class Tree:
    def __init__(self):
        self.root=None

    def bfs(self):
        queue=[]
        queue.append(self.root)
        while len(queue)>0:
            first=queue.pop(0)
            print(first.data)
            if first.left:
                queue.append(first.left)
            if first.right:
                queue.append(first.right)

    def level_order(self):
        queue=[]
        queue.append(self.root)
        queue.append(dummy)
        sum=0
        maxSum=0
        while len(queue)>0:
            first=queue.pop(0)
            if first.data!='#':
                sum=sum+first.data
            if first.data=='#':
                maxSum=max(sum,maxSum)
                if len(queue)>0:
                    queue.append(dummy)
                    sum=0
                print("\n")
                continue
            print(first.data," ", end="")
            if first.left:
                queue.append(first.left)
            if first.right:
                queue.append(first.right)

        return maxSum


tree=Tree()
n1=treeNode(1)
n2=treeNode(2)
n3=treeNode(3)
n4=treeNode(4)
n5=treeNode(5)
n6=treeNode(6)
n7=treeNode(7)
dummy=treeNode("#")


tree.root=n1
n1.left=n2
n1.right=n3
n2.left=n4
n2.right=n5
n3.left=n6
n3.right=n7

#tree.bfs()
print(tree.level_order())
