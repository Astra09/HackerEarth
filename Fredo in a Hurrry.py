import math
t=int(input())
while(t>0):
    n=int(input())
    if(n>2):
        sq=math.sqrt(n)
        sq=round(sq)
        print(n+sq)
    else:
        print(n)
    t-=1
