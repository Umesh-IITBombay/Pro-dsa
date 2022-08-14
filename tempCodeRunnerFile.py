from z3 import *

a = Bool('a')
b = Bool('b')
ab = And(a,b)
print(ab.arg(0))
print(ab.arg(1))