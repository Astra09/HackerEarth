t=int(input())
wd=[['.'],['a','b','c'],['d','e','f'],['g','h','i'],['j','k','l'],['m','n','o'],['p','q','r','s'],['t','u','v'],['w','x','y','z']]
while(t>0):
    s=list(input().split("-"))
    res=""
    for item in s:
        item=list(item)
        ind=int(item[0])
        c=len(item)
        res+=wd[ind-1][c-1]
    print(res)
    t-=1
