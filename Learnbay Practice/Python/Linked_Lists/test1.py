# Python program to reverse alternate nodes and append
# at end
# Extra space allowed - O(1)
#  https://www.geeksforgeeks.org/given-linked-list-reverse-alternate-nodes-append-end/

# Node Class
class Node:

	# Constructor to initialize the node object
	def __init__(self, data):
		self.data = data
		self.next = None

# Linked list class contains node object
class LinkedList:

	# Constructor to initialize head
	def __init__(self):
		self.head = None

	# Function to insert a new node at the beginning
	def push(self, new_data):
		new_node = Node(new_data)
		new_node.next = self.head
		self.head = new_node


	def printList(self):
		temp = self.head
		while(temp):
			print(temp.data)
			temp = temp.next

	def rearrange(self):

		# If linked list has less than 3 nodes, no change
		# is required
		odd = self.head
		if (odd is None or odd.next is None or
			odd.next.next is None):
			return

		# Even points to the beginning of even list
		even = odd.next

		# Remove the first even node
		odd.next = odd.next.next

		# Odd points to next node in odd list
		odd = odd.next

		# Set terminator for even list
		even.next = None

		# Traverse the list
		while (odd and odd.next):
			# Store the next node in odd list
			temp = odd.next.next

			# Link the next even node at the beginning
			# of even list
			odd.next.next = even
			even = odd.next

			# Remove the even node from middle
			odd.next = temp

			# Move odd to the next odd node
			if temp is not None:
				odd = temp

		# Append the even list at the end of odd list
		odd.next = even

# Code execution starts here
if __name__ == '__main__':
	start = LinkedList()

	# The constructed linked list is ;
	# 1->2->3->4->5->6->7
	start.push(7)
	start.push(6)
	start.push(5)
	start.push(4)
	start.push(3)
	start.push(2)
	start.push(1)

	print("Linked list before calling rearrange() ")
	start.printList()

	start.rearrange()

	print("\nLinked list after calling rearrange()")
	start.printList()

# This code is contributed by NIkhil Kumar Singh(nickzuck_007)
