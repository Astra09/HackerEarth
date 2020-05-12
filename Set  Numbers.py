t=int(input())
while(t>0):
    n=int(input())
    tmpn=n
    out=n
    n=bin(n)[2:]
    res='1'*len(n)
    cc=n.count('1')
    for i in (range(0,len(res))):
        res=res[0:i]+'0'+res[i+1:]
        res2=int(res,2)
        if(res2<=tmpn and res.count('1')>cc):
            cc=res.count('1')
            out=res2
    print(out)
    t-=1
