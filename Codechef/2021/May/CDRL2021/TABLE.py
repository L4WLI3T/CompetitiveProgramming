# cook your dish here
x=int(input())
for i in range (1,11):
    if(i<=9):
        print('{} -> '.format(x*i),end="")
    else:
        print(x*10)