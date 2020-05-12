n=int(input())
a=list(map(int,input().split()))
m=int(input())
c=list(map(int,input().split()))
b=[]
for i in range(0,len(c)):
    for j in range(0,len(a)):
        ind=abs(c[i]-a[j])
        if ind not in b:
            b.append(ind)
b.sort()
res=[]
for j in range(0,len(b)):
    flag=1
    for i in range(0,len(a)):
        if((a[i]+b[j]) not in c):
            flag=0
            break
    if(flag==1):
        res.append(b[j])
        
res.sort()
print(res)
    
