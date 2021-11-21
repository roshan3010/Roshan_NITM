import sys
import filecmp
try:
    temp={}
    for line in open('C:\\Users\\roshan.kumar\\Documents\\file.txt', 'rt'):
        for ch in line:
            #print(ch, end='')
            if ch.lower() in temp:
                temp[ch]=temp[ch]+1
            else:
                temp[ch.lower()]=1
except Exception as exc:
    print("Cannot open the file ::", exc)

try:
    stream = open("C:\\Users\\roshan.kumar\\Documents\\file.hist", "wt")
    for item in dict(sorted(temp.items(), key=lambda item: item[1], reverse=True)):
        #print(item,' -> ',temp[item])
        string = item + ' -> ' + str(temp[item])
        stream.write(string)
        stream.write('\n')
    #print(stream.write("Testing the write feature"))
    stream.close()
except Exception as exc:
    print("Cannot open the file:", exc)

print(filecmp.cmp("C:\\Users\\roshan.kumar\\Documents\\file.hist", "C:\\Users\\roshan.kumar\\Documents\\output.txt"))

import os
#print(dir(os))
import sys
print("Python version")
print (sys.version)
print(os.name)
