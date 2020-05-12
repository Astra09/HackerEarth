n=int(input())
while(n>0):
    s,k=map(int,input().split())
    res=0
    for j in range(1,s+1):
        ss=bin(j)
        ss=ss[2:]
        kk=0
        for i in range(0,len(ss)-2):
            if(ss[i]=='1' and ss[i+1]=='0' and ss[i+2]=='1'):
                kk+=1

        if(kk>=k):
            res+=1
    print(res)
    n=n-1
