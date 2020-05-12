def check(ss):
    for i in range(0,len(ss)):
        if(ss[i]!=ss[len(ss)-i-1]):
            return False
    return True
s=input()
maxs=0
for i in range(0,len(s)):
    for j in range(i+1,len(s)+1):
        sub=s[i:j]
        if(check(sub)==False):
            if(len(sub)>maxs):
                maxs=len(sub)
print(maxs)
        
