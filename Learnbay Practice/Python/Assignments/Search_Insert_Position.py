'''
Given a sorted array of distinct integers and a target value,
return the index if the target is found. If not, return the index where it would be if it were inserted in order.

Input: nums = [1,3,5,6], target = 5
Output: 2

Input: nums = [1,3,5,6], target = 2
Output: 1

'''
def search_insert_position(list1,target):
    if target in list1:
        #print(target)
        return list1.index(target)
    else:
        for i in range(len(list1)):
            if target<list1[i]:
                return i
            elif list1[i]<target<list1[i+1] and i+1<=len(list1):
                return i+1
            elif target>list1[i] and  i==len(list1)-1:
                return i+1

list1=[1,2,3,5,7,10]
target=int(input("please enter the target : "))
print(search_insert_position(list1,target))
