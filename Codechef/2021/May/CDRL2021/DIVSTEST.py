# cook your dish here
t=int(input())
lst=[]
for i in range(t):
    c=0
    x=int(input())
    if(x%5==0):
        c+=1
        if(x%15==0):
            c+=1
            if(x%75==0):
                c+=1
                lst.append(c)
            else:
                lst.append(c)
        else:
            lst.append(c)
    else:
        lst.append(c)

for i in lst:
    print(i)