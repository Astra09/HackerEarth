n,k=map(int,input().split())
ls=list(map(int,input().split()))
ls2=[]
for i in range(0,len(ls)):
    ll=[]
    ll.append(i+1)
    ll.append(ls[i])
    ls2.append(ll)
ls2.sort(key=lambda x:x[1],reverse=True)
for i in range(0,k):
    print(ls2[i][0],end=" ")
        
    
