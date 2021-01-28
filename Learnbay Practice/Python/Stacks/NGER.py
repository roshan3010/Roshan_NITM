input = [12, 3, 7, 4, 3, 5]

def NGER(input):
    output=[0]*len(input)
    stack=[]
    for i in range(len(input)-1, -1, -1):
        while len(stack)>0 and stack[-1]<input[i]:
            stack.pop()
        if len(stack)==0:
            output[i]=-1
        else:
            output[i]=stack[-1]
        stack.append(input[i])

    return output

print(NGER(input))
