import sys
try:
    stream = open("C:\\Users\\roshan.kumar\\Documents\\file.txt", "wt")
    print(stream.write("Testing the write feature"))
    stream.close()
except Exception as exc:
    print("Cannot open the file:", exc)
