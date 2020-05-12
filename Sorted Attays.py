n=int(input())
cc=0
ls=list(map(int,input().split()))
for i in range(0,len(ls)-1):
    if(ls[i]>ls[i+1]):
        cc+=((ls[i]-ls[i+1])+1)
print(cc)
    
