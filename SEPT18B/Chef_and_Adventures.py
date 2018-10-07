# cook your dish here
for i in range(int(input())):
	n,m,x,y=map(int,input().split())
	n=n-1
	m=m-1
	if(n//x==n/x and m//y==m/y):
		print("Chefirnemo")
	elif((n-1)//x==(n-1)/x and (m-1)//y==(m-1)/y and(n-1)>=0 and (m-1)>=0):
	    print("Chefirnemo")
	else:
	    print("Pofik")