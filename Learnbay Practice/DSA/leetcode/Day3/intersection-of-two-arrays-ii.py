class Solution:
    def intersect(self, nums1: List[int], nums2: List[int]) -> List[int]:
        #nums1Updated = set(nums1)
        #nums2Updated = set(nums2)
        nums1, nums2 = sorted(nums1), sorted(nums2)
        i=j=0
        tmp=[]
        while True:
            try:
                if nums1[i]>nums2[j]:
                    j+=1
                elif nums2[j]>nums1[i]:
                    i+=1
                else:
                    tmp.append(nums1[i])
                    i+=1
                    j+=1
            except IndexError:
                break
        return tmp
