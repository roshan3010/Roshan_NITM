def findMin(nums):
    n=len(nums)
    min=float('inf')
    #print(min, nums)
    for i in range(n):

        if nums[i] < min:
            min=nums[i]
    return min


#driver
nums=[2,7,6,3,1,5,4]
#print(nums)
print(findMin(nums))
