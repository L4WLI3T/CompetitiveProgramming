# cook your dish here
t=int(input())
for i in range(t):
    size = 3 
    tt = []
    for x in range(size):
        #tt.append([str(y) for y in input().split()])
        tt.append(list(input()))
    x,y,space=0,0,0
    xl,yl,spacel=[],[],[]
    for i in range(3):
        x+=tt[i].count("X")
        y+=tt[i].count("O")
        space+=tt[i].count("_")
    wx,wy=0,0
    if ((tt[0][0]=="X" and tt[0][1]=="X" and tt[0][2]=="X") or
    (tt[1][0]=="X" and tt[1][1]=="X" and tt[1][2]=="X") or
    (tt[2][0]=="X" and tt[2][1]=="X" and tt[2][2]=="X") or
    (tt[0][0]=="X" and tt[1][1]=="X" and tt[2][2]=="X") or 
    (tt[0][2]=="X" and tt[1][1]=="X" and tt[2][0]=="X")or
    (tt[0][0]=="X" and tt[1][0]=="X" and tt[2][0]=="X") or
    (tt[0][1]=="X" and tt[1][1]=="X" and tt[2][1]=="X") or
    (tt[0][2]=="X" and tt[1][2]=="X" and tt[2][2]=="X")):
        wx=1
    if ((tt[0][0]=="O" and tt[0][1]=="O" and tt[0][2]=="O") or
    (tt[1][0]=="O" and tt[1][1]=="O" and tt[1][2]=="O") or
    (tt[2][0]=="O" and tt[2][1]=="O" and tt[2][2]=="O") or
    (tt[0][0]=="O" and tt[1][1]=="O" and tt[2][2]=="O") or 
    (tt[0][2]=="O" and tt[1][1]=="O" and tt[2][0]=="O")or
    (tt[0][0]=="O" and tt[1][0]=="O" and tt[2][0]=="O") or
    (tt[0][1]=="O" and tt[1][1]=="O" and tt[2][1]=="O") or
    (tt[0][2]=="O" and tt[1][2]=="O" and tt[2][2]=="O")):
        wy=1
    if((wx==1 and wy==1)or((x-y) <0)or(x-y)>1):
        print("3")
    elif((wx==0 and wy==0 and space>0)or(x==0 and y==0 and space==9)):
        print("2")
    elif ((wx==0 and wy==0 and space==0)or(wx==1 and wy==0 and x>y)or(wx==0 and wy==1 and x==y)):
        print("1")
    else:
        print("3")
