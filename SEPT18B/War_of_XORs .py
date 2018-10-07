from collections import defaultdict
for i in range(int(input())):
    def xor(l1,n,x):
        r=0
        d=defaultdict(int)
        for i in range(n):
            ans=x^l1[i]
            if(d[ans]>0):
                r+=d[ans]
            d[l1[i]]+=1
        return r
    n=int(input())
    l=list(map(int,input().split()))
    le=[]
    lo=[]
    for i in l:
        if(i%2==0):
            le.append(i)
        else:
            lo.append(i)
    ne=len(le)-1
    ne=((ne)*(ne+1))//2
    no=len(lo)-1
    no=((no)*(no+1))//2
    nf=no+ne
    nf-=xor(lo,len(lo),0)
    nf -= xor(lo, len(lo), 1)
    nf -= xor(lo, len(lo), 2)
    nf -= xor(le, len(le), 0)
    nf -= xor(le, len(le), 1)
    nf -= xor(le, len(le), 2)
    print(nf)




