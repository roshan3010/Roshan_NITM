def pascals_triangle(numRows):
    result = [[0 for _ in range(numRows)] for _ in range(numRows)]
    for i in range(numRows):
        for j in range(i+1):
            result[i][j] = fact(i)//(fact(i-j)*fact(j))

    for sub_list in result:
        for dx in (0, -1):
            while sub_list and sub_list[dx] == 0:
                sub_list.pop(dx)
    return result


def fact(n):
    if n==0 or n==1:
        return 1
    return (n*fact(n-1))

print(fact(3))
print(pascals_triangle(4))
