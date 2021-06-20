# cook your dish here
x=int(input())
lst=[]
st=[]
a=[]
sar=0
anu=0
for i in range(0,x):
    inp = list(map(int,input().split()))
    lst.append(inp)
    for i in range(lst[i][0]):
        s=input()
        st.append(s)
    a.append(st)
    st=[]
#print(a[1][1])    
for i in range(len(a)):
    for j in range(len(a[i])):
        if (a[i][j].startswith("E") or a[i][j].startswith("Q")or a[i][j].startswith("U") or a[i][j].startswith("I")
            or a[i][j].startswith("N")or a[i][j].startswith("O")or a[i][j].startswith("X")):
            sar+=lst[i][1]
        else:
            anu+=lst[i][2]
    #print(sar,anu)
    if(sar>anu):
        print("SARTHAK")
    elif(anu>sar):
        print("ANURADHA")
    else:
        print("DRAW")
    sar=0
    anu=0