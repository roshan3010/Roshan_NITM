def threeSum(nums):
    n=len(nums)
    newList=[[]]
    hashTable=[]
    for i in range(n):
        target=-nums[i]
        for j in range(n):
            if j==i: continue
            subTarget=-(target-nums[j])
            print(subTarget)
            #print([nums[i],nums[j],nums[nums.index(subTarget)]])
            if ((subTarget) in hashTable):
                print("sum : ",sum(nums[i],sum(nums[j],nums[nums.index(subTarget)]))
                newList.append([nums[i],nums[j],nums[nums.index(subTarget)]])
            else:
                hashTable.append(nums[j])

    return newList

arr=[-1,0,1,2,-1,-4]
print(threeSum(arr))
newList.append([nums[i],nums[j],nums[nums.index(subTarget)]])
