vowel=['a','e','i','o','u']
cons=['b','c','d','f','g','h','j','k','l','m','n','p','q','r','s','t','v','w','x','y','z']
t=int(input())
while(t>0):
    n=int(input())
    s=input()
    cc=0
    for i in range(0,len(s)-1):
        if s[i] in cons and s[i+1] in vowel:
            cc+=1
    print(cc)
    t-=1
