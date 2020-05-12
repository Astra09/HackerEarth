s=input()
q=int(input())
while(q>0):
    pos,ch=input().split()
    pos=int(pos)
    s=s[:pos-1]+ch+s[pos:]
    q-=1
res1=s
m=int(input())
while(m>0):
    a,b=map(int,input().split())
    s=s[:a-1]+s[a-1:b][::-1]+s[b:]
    m-=1
cc=0
for i in range(0,len(s)):
    if(res1[i]==s[i]):
        cc+=1
print(res1)
print(s)
print(cc)


    
