from itertools import combinations
import math
n=int(input())
ls=[]
while(n>0):
    t=int(input())
    ls.append(t)
    n-=1
ls.sort()
tmp1=[]
if(ls[0]==1):
    tmp1.append(1)
    for i in range(1,len(ls)):
        if(int(round(ls[i] ** (1. / 3))) ** 3 == ls[i]):
            continue
        else:
            if ls[i] not in tmp1:
                tmp1.append(ls[i])
res=[]
tmp1.sort(reverse=True)
comb=list(combinations(tmp1,2))
rem=[]
for item in comb:
    tmp=list(item)
    x=tmp[0]*tmp[1]
    if(int(round(x ** (1. / 3))) ** 3 == x):
        rem.append(min(tmp[0],tmp[1]))
    else:
        if tmp[0] not in res:
            res.append(tmp[0])
        if tmp[1] not in res:
            res.append(tmp[1])
for item in rem:
    if item in res:
        res.remove(item)
cc=0
for item in res:
    cc+=ls.count(item)
print(cc)
