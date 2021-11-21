def containsDuplicate(nums):
    return True if len(set(nums)) < len(nums) else False

nums = [3,3]
print(containsDuplicate(nums))
