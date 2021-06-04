def copyRandomList(head):
        nodeMap={}
        currentNode=head

        while currentNode:
            nodeMap[currentNode]= Node(currentNode.val)
            currentNode=currentNode.next

        currentNode=head
        while currentNode:
            nodeMap[currentNode].next=nodeMap.get(currentNode.next)
            nodeMap[currentNode].random=nodeMap.get(currentNode.random)
            currentNode=currentNode.next

        return nodeMap.get(head)
                 
