n=int(input())
ls=list(map(int,input().split()))
res=""
for i in range(0,len(ls)//2):
    ind=str(ls[i])
    res=res + ind[0]
for i in range(len(ls)//2,len(ls)):
    ind=str(ls[i])
    res=res + ind[-1]
if((int(res)%11)==0):
    print("OUI")
else:
    print("NON")
