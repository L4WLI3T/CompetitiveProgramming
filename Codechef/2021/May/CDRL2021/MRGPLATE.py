# cook your dish here
import math
t=int(input())
for i in range(t):
    a,b = [int(i) for i in input().split()]
    if((a+b)%3==0):
        if(max(a,b)==b and 2*a>=b):
            print("YES")
        elif(max(a,b)==a and 2*b>=a):
            print("YES")
        else:
            print("NO")
    else:
        print("NO")