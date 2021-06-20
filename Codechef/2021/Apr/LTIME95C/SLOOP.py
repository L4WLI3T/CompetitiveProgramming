# cook your dish here
x=int(input())
lst=[]
for i in range(0,x):
    inp = list(map(int,input().split()))
    lst.append(inp)

for i in range(0,x):
    a=lst[i][0]
    b=lst[i][1]
    print(a//b)