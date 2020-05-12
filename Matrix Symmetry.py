t=int(input())
while(t>0):
    n=int(input())
    ar=[]
    ar2=[]
    art=[]
    for i in range(0,n):
        ls=[0]*1
        art.append(ls)
    for i in range(0,n):
        ls=list(input())
        ar.append(ls)
        ar2.extend(ls)
    for i in range(0,len(ar2)):
        ind=i%n
        art[ind].append(ar2[i])
    for i in range(0,n):
        art[i].pop(0)
    h=1
    v=1
    for j in range(0,len(ar)):
        if(ar[j]!=ar[len(ar)-j-1]):
            h=0
            break
    #art1 = [list(i) for i in zip(*ar)]  #Transpose krne ke liye
    for j in range(0,len(art)):
        if(art[j]!=art[len(art)-j-1]):
            v=0
            break
    if(h==1 and v==1):
        print("BOTH")
    elif(h==1 and v==0):
        print("HORIZONTAL")
    elif(h==0 and v==1):
        print("VERTICAL")
    else:
        print("NO")
    t-=1
