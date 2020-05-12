t=int(input())
ch=[6,2,5,5,4,5,6,3,7,6]
while(t>0):
    mins=100000
    n=int(input())
    ls=list(map(int,input().split()))
    sums=0
    for item in ls:
        tmp=item
        item=list(str(item))
        for j in range(0,len(item)):
            item[j]=ch[int(item[j])]
        sums=sum(item)
        if(sums<mins):
            mins=sums
            res=tmp
    print(res)
    t-=1
