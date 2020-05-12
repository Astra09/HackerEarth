try:
    s=input()
    l=-1
    o=-1
    v=-1
    e=-1
    l=s.index('l')
    s=s[l:]
    o=s.index('o')
    s=s[o:]
    v=s.index('v')
    s=s[v:]
    e=s.index('e')
    s=s[e:]
    if(l>-1 and o>-1 and v>-1 and e>-1):
        print("I love you, too!")
    else:
        print("Let us breakup!")
except:
    print("Let us breakup!")
    pass
