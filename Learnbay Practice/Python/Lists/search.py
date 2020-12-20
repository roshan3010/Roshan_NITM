list1=[1,2,4,3,5,8,7]
if 2 in list1:
    print("List has the number")
else:
    print("list does not have the number")

import glob
for item in dir(glob):
    print(item)

print('\nNamed with wildcard *:')
file = glob.glob("C:/Users/roshan.kumar/OneDrive - Scientific Games Corporation/Jurisdictions/scripts/**/*",recursive = True)
for name in file:
    print(name)

#print(count(file))
