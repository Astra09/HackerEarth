t=int(input())
while(t>0):
    n,x=map(int,input().split())
    ls=[]
    while(n>0):
        g=int(input())
        ls.append(g)
        n-=1
    ls2=[]
    flag=0
    for i in range(0,len(ls)):
        if(sum(ls2)<x):
            ls2.append(ls[i])
        elif(sum(ls2)>x):
            ls2.pop(0)
        if(sum(ls2)==x):
            flag=1
            break
    if(sum(ls2)>x):
            ls2.pop(0)
    if(sum(ls2)==x):
        flag=1
    if(flag==1):
        print("YES")
    else:
        print("NO")
    t-=1
