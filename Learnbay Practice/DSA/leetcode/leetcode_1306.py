# def canReach(arr, start):
#
#     if((start<0) or (start>len(arr))):
#         return False
#
#     print(start)
#     if (arr[start]==0):
#         return True
#     else:
#         return canReach(arr, start+arr[start]) or canReach(arr, start-arr[start])

# def canReach(arr, start):
#         def helper(curr,visited):
#             if 0<=curr<len(arr) and curr not in visited:
#                 visited.add(curr)
#                 if arr[curr]==0:
#                     return True
#                 return helper(curr+arr[curr],visited) or helper(curr-arr[curr],visited)
#         return helper(start,set())


def canReach(arr, start):
        if start<0 or start>len(arr) or arr[start]<0:
            return False
        arr[start]*=-1
        return arr[start]==0 or canReach(arr, start+arr[start]) or canReach(arr, start-arr[start])

# def canReach(A,cur):
#     q=deque([cur])
#     while q:
#         cur = q.popleft()
#         if A[cur]==0: return True
#         if A[cur]<len(A): q.append(cur+A[cur])
#         if A[cur]>=0: q.append(cur-A[cur])
#         A[cur]*=-1
#     return False

arr=[4,2,3,0,3,1,2]
print(canReach(arr, 5))
