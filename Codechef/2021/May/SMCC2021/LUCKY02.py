# cook your dish here
t= int(input())
for i in range(t):
    num=input()
    st=list(num)
    c=0
    for i in range(len(st)):
        if(st[i]=="3" or st[i]=="7" ):
            c+=1
    if(c==len(st)):
        print("LUCKY")
    else:
        print("BETTER LUCK NEXT TIME")