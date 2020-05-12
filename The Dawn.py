import math
n=int(input())
sq=int(math.sqrt(n))
if(sq*(sq+1)==n):
    print(sq+sq+1)
elif(sq*(sq+2)==n):
    print(sq+sq+2)
elif(sq*(sq-1)==n):
    print(sq-1+sq)
elif(sq*(sq-2)==n):
    print(sq-2+sq)
elif((sq-1)*(sq+1)==n):
    print(sq-1+sq+1)
