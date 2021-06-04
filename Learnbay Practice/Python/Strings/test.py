# This code causes the MemoryError exception.
# Warning: executing this code may affect your OS.
# Don't run it in production environments!
#
# string = 'x'
# try:
#     while True:
#         string = string + string
#         print(len(string))
# except MemoryError:
#     print('This is not funny!')
#
#########################################################################
# The code prints subsequent
# values of exp(k), k = 1, 2, 4, 8, 16, ...

# from math import exp
#
# ex = 1
#
# try:
#     while True:
#         print(exp(ex))
#         ex *= 2
# except OverflowError:
#     print('The number is too big.')
#########################################################################
x='\''
print(x)
