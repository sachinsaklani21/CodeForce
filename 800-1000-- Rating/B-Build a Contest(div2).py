import sys
data=sys.stdin.read().split()
it=iter(data)
n=int(next(it))
length=int(next(it))
lst=[int(next(it)) for _ in range(length)]
count={}
distinct=0
for num in lst:
    if num not in count or count[num]==0:
        distinct+=1
    count[num]=count.get(num,0)+1
    if distinct==n:
        print(1,end="")
        for i in range(1,n+1):
            count[i]-=1
            if count[i]==0:
                distinct-=1
    else:
        print(0,end="")            


