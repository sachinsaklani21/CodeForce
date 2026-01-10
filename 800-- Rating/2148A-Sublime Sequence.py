import sys
data=sys.stdin.read().split()
it=iter(data)
tc=int(next(it))
for _ in range(tc):
    x,n=int(next(it)),int(next(it))
    if n==1 or n%2!=0:
        print(x)
    else:
        print(0)
    
        