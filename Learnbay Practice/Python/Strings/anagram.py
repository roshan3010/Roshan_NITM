def isAnagram(text1, text2):
    #text1 = text1.replace(" ","")
    #text2 = text2.replace(" ","")
    text1 = sorted(text1)
    text2 = sorted(text2)
    #print(text1, text2)
    if text1 == text2:
        return True
    else:
        return False


text1 = input("enter text 1 : ")
text2 = input("enter text 2 : ")
print(isAnagram(text1,text2))
