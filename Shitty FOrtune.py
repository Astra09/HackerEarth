def check(s):
    for i in range(0,len(s)):
        if(s[i]!=s[len(s)-i-1]):
            return False
    return True
t=int(input())
while(t>0):
    s=input().split(" ")
    k=int(k)
    if(len(s)%k==0):
        kk=len(s)//k
        flag=1
        for i in range(0,len(s)-kk,kk):
            if(check(s[i:i+kk])):
                     flag+=1

        if(flag==k):
            print("YES")
        else:
            print("NO")
    else:
        print("NO") 
    t-=1
