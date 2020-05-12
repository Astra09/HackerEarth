n,m=map(int,input().split())
a=list(map(int,input().split()))
c=list(map(int,input().split()))
q=int(input())
dict={}
for i in range(0,len(a)):
    if a[i] not in dict:
        ll=[i]
        dict[a[i]]=ll
    else:
        dict[a[i]].append(i)
while(q>0):
    flag=1
    l,r=map(int,input().split())
    unq=[]
    for i in range(l-1,r):
        unq.append(a[i])
    unq=list(set(unq))
    for i in range(0,len(unq)):
        ls2=dict[unq[i]]
        cc=0
        for j in range(0,len(ls2)):
            if(ls2[j]>=l-1 and ls2[j]<=r-1):
                cc+=1
        if(cc!=c[unq[i]-1]):
           flag=0
           break
    if(flag==1):
        print(1)
    else:
        print(0)
    q-=1
