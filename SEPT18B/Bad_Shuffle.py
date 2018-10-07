n=int(input())
def odd(n):
    l1 = []
    for i in range(2, n // 2 + 1):
        l1.append(i)
    l1.append(1)
    for i in range(n // 2 + 2, n + 1):
        l1.append(i)
    l1.append(n // 2 + 1)
    return l1
if(n==1):
    print("1")
    print("1")
elif(n==2):
    print("1","2")
    print("2","1")
else:
    l1=[2,3,1]
    l2=[]
    if(n%2!=0 and n==3):
        print(*l1)
        print("3 1 2")
    elif(n%2!=0):
        l1=odd(n-1)
        l1.append(n)
        l1[n-1],l1[n-2]=l1[n-2],l1[n-1]
        print(*l1)
        l2.append(n)
        l2.append(1)
        for i in range(2,n):
            l2.append(i)
        print(*l2)
    if(n%2==0):
        l1=[]
        for i in range(2,n//2+1):
            l1.append(i)
        l1.append(1)
        for i in range(n//2+2,n+1):
            l1.append(i)
        l1.append(n//2+1)
        print(*l1)
        l2.append(n)
        l2.append(1)
        for i in range(2, n):
            l2.append(i)
        print(*l2)
