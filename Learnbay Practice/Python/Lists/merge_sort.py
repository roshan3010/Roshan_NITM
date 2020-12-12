def partition(A):
    return len(A)//2

def merge(A, left, mid, right):
    left_list = A[left:mid]
    right_list = A[mid:right+1]

    result = []
    p1 = left
    p2 = mid

    p = 0
    while(p1 < len(left_list) and p2 < len(right_list)):
        if left_list[p1] <= right_list[p2]:
            result.append(left_list[p1])
            p1 += 1
        elif left_list[p1] > right_list[p2]:
            result.append(right_list[p2])
            p2 += 1

    while(p1 < len(left_list)):
        result.append(left_list[p1:])

    while(p2 < len(right_list)):
        result.append(right_list[p2:])

    A = result

def merge_sort(A, left, right):
    #base condition
    if left <= right:
        p = partition(A)
        merge_sort(A, left, p)
        merge_sort(A, p, right)
        merge(A, left, p, right)

list1=[3,2,9,5,1,8]
merge_sort(list1,0,len(list1))
