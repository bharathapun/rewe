milo=input()
kilo=len(milo)
def balin(a):
    b=len(a)
    c=[]
    for i in range(b+1):
        for j in range(b+1):
            if(j>i):
                d=a[i:j]
                if(d==d[::-1]):
                    if d not in c:
                        c.append(d)
    e=[]
    for i in c:
        e.append(len(i))
    f=max(e)
    g=e.index(f)
    h=c[g]
    return(len(h))
print(kilo-balin(milo))
