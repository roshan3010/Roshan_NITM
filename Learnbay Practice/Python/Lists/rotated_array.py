def find_pivot(A, left, right):
    while left <= right:
        mid = (left + right) // 2
        if mid == right:
            return mid
        elif mid == left:
            return mid
        elif A[mid]<A[mid-1] and A[mid]<A[mid+1]:
            return mid
        elif A[mid]<A[right]:
            right = mid - 1
        else:
            left = mid + 1



def rotated_search(A, item):
    p = find_pivot(A, 0, len(A)-1, flag)
    left = A[:p]
    right = A[p:]
    if item >= left[0] and item <= left[len(left)-1]:
        binary_search(left, item)
    else:
        binary_search(right, item)
    print(left)
    print(right)
