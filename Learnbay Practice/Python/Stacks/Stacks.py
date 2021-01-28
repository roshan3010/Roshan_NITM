class stack:
    def __init__(self):
        self.stack=[]

    def push(self,data):
        self.stack.append(data)

    def pop(self):
        self.stack.pop()

    def top(self):
        return self.stack[-1]


s=stack()
s.push(1)
s.push(2)
s.pop()
s.push(3)
s.push(4)
s.push(5)
s.pop()
print(s.top())
