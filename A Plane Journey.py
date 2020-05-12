n,m=map(int,input().split())
a=list(map(int,input().split()))
b=list(map(int,input().split()))
dict={}
person=0
for i in range(0,len(a)):
    if a[i] not in dict:
        person+=1
        dict[a[i]]=1
    else:
        dict[a[i]]+=1
trips=0
b.sort(reverse=True)
avail=[]
for item in b:
    avail.append(item)
cp=0
for key,val in dict.items():
    cp=0
    if(avail[cp]>dict[key]):
        trips+=1
        avail.pop(cp)
        person-=1
    else:
        tmp=dict[key]/avail[cp]
        
    if(len(avail)==0 and person>0):
        trips+=1
        avail.append(b[0])
        avail.sort()
print(trips)
