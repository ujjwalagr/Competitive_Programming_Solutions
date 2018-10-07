#darkshadow always rule
from collections import defaultdict
for i in range(int(input())):
    def setbdp(bdp,fdp,s1,s2):
        bdp[1]=min(int(s1[0]),int(s2[0]))
        fdp[1]=min(int(s1[0]),int(s2[0]))
    s = ""
    def nm(s1,s2):
        n,m=len(s2),len(s1)
        return n,m
    d=defaultdict(int)
    s1 = input()
    s2 = input()
    n,m=nm(s1,s2)
    fdp = [0]*(m+1)
    bdp=[0]*(n+1)
    f1dp=[0]*(m+1)
    b1dp=[0]*(n+1)
    setbdp(bdp,fdp,s1,s2)
    #print(bdp[1],fdp[1])
    for i in range(2,n+1):
        bdp[i]=min(1-bdp[i-1],int(s2[i-1]))
    for i in range(2,m+1):
        fdp[i]=min(1-fdp[i-1],int(s1[i-1]))
    try:
        d[0]=f1dp[2]=b1dp[2]=min(1-fdp[2],1-bdp[2])
    except:
        pass
    for i in range(3,n+1):
        b1dp[i]=min(1-bdp[i],1-b1dp[i-1])
        d[i-2]=b1dp[i]
    for i in range(3,m+1):
        f1dp[i]=min(1-fdp[i],1-f1dp[i-1])
        d[2-i]=f1dp[i]
    for i in range(int(input())):
        l,r=map(int,input().split())
        if (l == 1):
            s += str(1 - fdp[r])
        elif (r == 1):
            s += str(1 - bdp[l])
        else:
            s+=str(1-d[l-r])
    print(s)


