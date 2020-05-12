t=int(input())
while(t>0):
    n,sums=map(int,input().split())
    ls=list(map(int,input().split()))
    cc=0
    for i in range(0,len(ls)):
        for j in range(i,len(ls)):
            sub=ls[i:j+1]
            print(sub,sum(sub))
            if(abs(sum(sub))>sums):
                cc+=1
    print(cc)
    t-=1
            
