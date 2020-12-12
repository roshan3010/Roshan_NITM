def Running_Sum_of_1d_Array(list1):
    list2=[]
    list2.append(list1[0])
    for i in range(1,len(list1)):
        list2.append(list2[i-1]+list1[i])

    print(list2)

list1=[1,2,3,4,5]
Running_Sum_of_1d_Array(list1)
A=[2,4,6,8]
for i in range(0,len(A)):
    print(A[i], end=",")

print("\n")
A.append(2)
A.insert(2,9)
print(A[0:2])
A.remove(2)
del A[0]
print(A)
