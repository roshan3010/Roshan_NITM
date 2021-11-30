def bubble_sort(A):
    for i in range(len(A)):
        #print("| i : ",i)
        for j in range(len(A)-1-i):
            #print(j," ", end="")
            if A[j]>A[j+1]:
                A[j], A[j+1] = A[j+1], A[j]

A=[100,200,33,40,-1]
print(A)
bubble_sort(A)
#print("")
print(A)
