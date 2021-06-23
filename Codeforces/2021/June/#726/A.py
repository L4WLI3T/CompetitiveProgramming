t=int(input())
while(t!=0):
    k=int(input())
    ar=list(map(int,input().split()))
    if sum(ar)/k==1:
        print("0")
    elif sum(ar)/k>1:
        print(sum(ar)-k)
    else:
        print("1")
    t-=1