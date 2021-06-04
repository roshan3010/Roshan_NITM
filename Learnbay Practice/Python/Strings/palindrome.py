def ispalindrome(text):
    text = text.lower().replace(" ", "")
    temp = text[::-1]
    if temp == text:
        return True
    else:
        return False


text = input("Enter Text : ")
ispalindrome(text)
