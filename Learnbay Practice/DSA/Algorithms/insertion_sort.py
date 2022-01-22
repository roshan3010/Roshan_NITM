def insertion_sort(arr):
    for i in range(1,len(arr)):
        key=arr[i]
        j=i-1
        print("i=",i, ", key=", key)
        while j>=0 and arr[j]>key:
            print("j=",j ,", j+1=", j+1)
            print(arr)
            arr[j+1]=arr[j]
            j=j-1


        arr[j+1]=key
    return arr


#
# def insertion_sort(arr):
#     for i in range(1,len(arr)):
#         key=i
#         j=i-1
#         print("i=",i, ", key=", arr[key])
#         while j>=0 and arr[j]>arr[key]:
#             print("j=",j ,", j+1=", j+1)
#             tmp=arr[key]
#             arr[key]=arr[j]
#             arr[j]=tmp
#             key=j
#             j=j-1
#
#     return arr
#
#
# arr=[3,5,2,1,6,4]
# print(insertion_sort(arr))
