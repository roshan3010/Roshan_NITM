def digitOfLife(bday):
    total = 0
    for ch in bday:
        total += int(ch)
    #print(total)
    if len(str(total)) > 1:
        return digitOfLife(str(total))
    else:
        return total



bday = input("Enter you Birthday in the format YYYYMMDD, or YYYYDDMM, or MMDDYYYY : ")
print(digitOfLife(bday))
