#Brute force
def maxSubArray(arr):
    currDiff=maxDiff=0
    for i in range(len(arr)):
        for j in range(i, len(arr)):
            currDiff=arr[j]-arr[i]
            if maxDiff<currDiff:
                maxDiff=currDiff
    return maxDiff

#
# class Solution:
#     def maxSubArray(self, nums: List[int]) -> int:
#         totSum=-1e8
#         for i in range(0,len(nums)):
#             currentMax=0
#             for j in range(i,len(nums)):
#                 currentMax += nums[j]
#                 if currentMax>totSum:
#                     totSum=currentMax
#
#         return totSum
#
# #Kadane's Algorithm
# def maxSubArray(nums):
#     currSum=0
#     maxSum=-1e8
#     for i in range(0, len(nums)):
#         currSum+=nums[i]
#         if currSum>maxSum:
#             maxSum=currSum
#         if currSum<0:
#             currSum=0
#
#     return maxSum

nums=[10,11,7,10,6]
print(maxSubArray(nums))
