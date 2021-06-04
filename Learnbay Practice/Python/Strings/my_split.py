def mysplit(strng1):
    lst=[]
    word=""
    strng=strng1.strip()
    #print("\n",strng)
    #print(len(strng))
    if len(strng) == 0:
        return lst
    for ch in strng:
        if ch!=" ":
            word+=ch
        else:
            lst.append(word)
            word=""

    lst.append(word)
        #print(word)
    return lst


print(mysplit("To be or not to be, that is the question"))
print(mysplit("To be or not to be,that is the question"))
print(mysplit("   "))
print(mysplit(" abc "))
print(mysplit(""))
