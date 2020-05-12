k=int(input())
dis=[]
while(k>0):
    s=input()
    dis.append(s)
    k-=1
n=int(input())
word=list(input().split(" "))
res=[]
for item in word:
    if item not in dis:
        res.append(item[0])
ans='.'.join(res)
print(ans.upper())
