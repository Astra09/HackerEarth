t=int(input())
while(t>0):
    n=int(input())
    ls=[]
    for i in range(1,n+1):
        ls.append(i)
    while(len(ls)>1):
        tmp=ls[1]
        ls.pop(0)
        ls.pop(0)
        ls.append(tmp)
    print(ls[0])
    t-=1

