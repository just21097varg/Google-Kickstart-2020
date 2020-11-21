t=int(input())
i=0
while(t!=0):
    t=t-1
    i=i+1
    n,k,s=map(int,input().split())
    c1=k-1+k-s+n-s+1
    c2=1+n+k-1
    print("Case #{}: {}".format(i,min(c1,c2)))
