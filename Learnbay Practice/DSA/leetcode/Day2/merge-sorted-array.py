def merge(nums1, m, nums2, n):
    """
    Do not return anything, modify nums1 in-place instead.
    """
    i = m-1
    j = n-1
    k = m+n-1
    while(i>=0 and j>=0):
        print(i,j)
        if nums1[i]>nums2[j]:
            nums1[k]=nums1[i]
            k-=1
            i-=1
        else:
            nums1[k]=nums2[j]
            k-=1
            j-=1
    while(j>=0):
        print(i,j)
        nums1[k]=nums2[j]
        k-=1
        j-=1
    return nums1


nums1=[1,2,3,0,0,0]
nums2=[2,5,6]
print(merge(nums1,3,nums2,3))
