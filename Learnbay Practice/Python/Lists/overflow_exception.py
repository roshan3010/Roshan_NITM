# the code prints subsequent
# values of exp(k), k = 1, 2, 4, 8, 16, ...

from math import exp
ex = 1
try:
    while True:
        print(exp(ex))
        ex *= 2
except OverflowError:
    print('The number is too big.')
