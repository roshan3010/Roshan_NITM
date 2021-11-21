def reverse(x):
    result = 0
    while x!=0:
        tail = x%10
        newResult = result*10 + tail
        if ((newResult - tail)/10 != result):
            return 0
        result = newResult
        x = x//10
        #print(x, result)

    return result

print(reverse(2147483648123498))
