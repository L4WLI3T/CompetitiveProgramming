# cook your dish here
from itertools import permutations
st=input()
perm = [''.join(i) for i in permutations(st)]
perm = set(perm)
print(len(perm))
for i in sorted(perm):
    print(i)