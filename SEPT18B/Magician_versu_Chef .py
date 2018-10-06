for i in range(int(input())):
    n,x,s=map(int,input().split())
    ans=x
    for i in range(s):
        a,b=map(int,input().split())
        if(ans==a):
            ans=b
        elif(ans==b):
            ans=a
    print(ans)

