# cook your dish here
t=int(input())
for i in range(t):
    #le, ro =int(input()).split()
    le,ro = [int(i) for i in input().split()]
    lst = list(map(int,input("").strip().split()))[:le]
    lst[:] = lst[le-ro:le]+lst[0:le-ro]
    for i in lst:
        print(i,end=" ")