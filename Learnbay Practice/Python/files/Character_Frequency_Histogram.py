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
    print("Cannot open the file ", exc)

try:
    stream = open("C:\\Users\\roshan.kumar\\Documents\\Testfile.txt", "wt")
    for item in sorted(temp):
        #print(item,' -> ',temp[item])
        string = item + ' -> ' + str(temp[item])+'\n'
        stream.write(string)
    #print(stream.write("Testing the write feature"))
    stream.close()
except Exception as exc:
    print("Cannot open the file:", exc)

print(filecmp.cmp("C:\\Users\\roshan.kumar\\Documents\\Testfile.txt", "C:\\Users\\roshan.kumar\\Documents\\output.txt"))
