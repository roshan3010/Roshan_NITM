input = [8, 2, 5, 4, 6, 9]

def PGEL(input):
    output=[0]*len(input)
    stack=[]
    for i in range(0, len(input)):
        while len(stack)>0 and stack[-1]<input[i]:
            stack.pop()
        if len(stack)==0:
            output[i]=-1
        else:
            output[i]=stack[-1]
        stack.append(input[i])

    return output

print(PGEL(input))
