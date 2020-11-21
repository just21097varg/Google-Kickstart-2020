t=int(input())
k=0
while t!=0:
    t=t-1
    k=k+1
    l,r=map(int,input().split())
    result=0
    for i in range(l,r+1):
        s=str(i)
        c=0
        for j in range(0,len(s),2):
            if int(s[j])%2!=1:
                c=c+1 
        for j in range(1,len(s),2):
            if int(s[j])%2!=0:
                c=c+1
        if c==0:
            result=result+1
    print("Case #{}: {}".format(k,result)) 
