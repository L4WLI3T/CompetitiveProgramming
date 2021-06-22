
import math
t=int(input())
for i in range(t):
    k=int(input())
    s=0
    lst=[]
    for i in range(1,(2*k+1)):
        #lst.append(k+i*i)
        s+=math.gcd((k+i*i),(k+(i+1)*(i+1)))
    #for i in range(0,len(lst)-1):
        #sum+=math.gcd(lst[i],lst[i+1])
    print(s)