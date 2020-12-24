def find_pair_sum(A,target_sum):
    hash_set=set()
    set_list=[]
    #hash_set.append(A[0])
    for i in range(len(A)):
        if target_sum-A[i] not in hash_set:
            hash_set.add(A[i])
        else:
            set_list.append((A.index(target_sum-A[i]),i))
    return set_list

A = [0,8,6,9,2,3,5,4,2,3,7,7]
print(find_pair_sum(A,8))
