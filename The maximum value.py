n=int(input())
mx=[[0]*100]*100
tmp=n;
cx=0
cy=0
res=[0]*100
ind=[]
eat=0
while(tmp>0):
    x,y=map(int,input().split(" "))
    mx[x-1][y-1]=1
    ind.append(x-1)
    tmp-=1
for i in range(100):
    if(mx[cx].count(1)>=2):
        cy=100-1
        eat+=mx[cx].count(1)-1
        cx+=1
        res[cx]=eat
    else:
        if(mx[cx][cy]==1):
            eat+=1
        cx+=1
        res[cx]=eat
for item in ind:
    print(res[item])
