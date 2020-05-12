n=int(input())
ls=list(map(int,input().split()))
res=str(ls[-1])
res=int(res[-1])
if(res==0):
    print("Yes")
else:
    print("No")
