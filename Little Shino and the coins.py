k=int(input())
res=0
s=list(input())
for i in range(0,len(s)):
    for j in range(i,len(s)):
        sub=s[i:j+1]
        if(len(list(set(sub)))==k):
            res+=1
print(res)
