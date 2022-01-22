#Approach01
# def removeDuplicates(arr):
#     n=len(arr)
#     count=0
#
#     if n==0:
#         return None
#     for i in range(1,n):
#         #print(n)
#         if arr[i] != arr[i-1]:
#             count+=1
#     return count
#
# arr=[1,2,1,3,3,4]
# print(removeDuplicates(arr))

#=============================================
#Approach02

def removeDuplicates(nums):
    n=len(arr)
    count=0

    if n==0:
        return None
    i=j=0
    while i<n and j<n:
        if arr[i]==arr[j]:
            j+=1
        else:
            i+=1
            arr[i]=arr[j]
    return arr[0:i+1]
    # n=len(nums)
    # if n<1:
    #     return nums
    # resIdx=0
    # curIdx=0
    # while curIdx<n:
    #     if nums[resIdx]==nums[curIdx]:
    #         curIdx+=1
    #     else:
    #         resIdx+=1
    #         nums[resIdx]=nums[curIdx]
    #         curIdx+=1
    # nums=nums[0:resIdx+1]
    # return nums


arr=[0,0,1,1,2,3,3,4,5,5,6,7,7]
print(removeDuplicates(arr))

#=======================Sort Colora===========================
#Approach01
# class Solution:
#     def sortColors(self, nums: List[int]) -> None:
#         """
#         Do not return anything, modify nums in-place instead.
#         """
#         n=len(nums)
#         res=[0]*3
#         for i in range(n):
#             #print(i)
#             res[nums[i]]+=1
#         j=0
#         for i in range(len(res)):
#             count=res[i]
#             while j<n and count>0:
#                 nums[j]=i
#                 j+=1
#                 count-=1
#         return nums

#=======================================================
#Approach02
