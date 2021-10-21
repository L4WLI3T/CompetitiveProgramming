t=int(input())
for i in range(t):
    a,b=[int(x) for x in input().split()]
    ct=0
    for i in range(50):
        if(pow(b,i)%a==0):
            print("YES")
            ct=1
            break
    if(ct==0):
        print("NO")