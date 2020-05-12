n=int(input())
ls=list(map(int,input().split()))
for i in range(0,len(ls)):
    if(ls[i]>n-(i+1)):
        print(i+1)
        break
