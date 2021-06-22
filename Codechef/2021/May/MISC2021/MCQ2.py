# cook your dish here
t=int(input())
ar=[]
ct=[]
c=0
for i in range(t):
    i=int(input())
    ar.append(i)
for i in range(len(ar)):
    if (i==0):
        c=1
        ct.append(c)
    else:
        if(ar[i]>ar[i-1]):
            c+=1
            ct.append(c)
        else:
            if((len(ar)-i)<c):
                x=len(ar)-i
                c=c-x
            else:
                c-=1
            ct.append(c)
print(sum(ct))