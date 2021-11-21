def twoSum(nums, target):
    hashSet = set()
    for i in range(0,len(nums)):
        index1=i
        if target-nums[i] in hashSet:
            print(index1, i)
            return True
        hashSet.add(nums[i])
    return False

nums=[2,1,5,3]
print(twoSum(nums, 8))
