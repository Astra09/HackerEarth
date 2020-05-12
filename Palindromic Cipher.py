def check(ss):
    for i in range(0,len(ss)):
        if(ss[i]!=ss[len(ss)-i-1]):
            return False
    return True
t=int(input())
while(t>0):
    s=input()
    if(check(s)==False):
        res=1
        for i in range(0,len(s)):
            ind=ord(s[i])-96
            res=res*ind
        print(res)
    else:
        print("Palindrome")
    t-=1
