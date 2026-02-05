import sys
data=sys.stdin.read().split()
it=iter(data)
tc=int(next(it))
for _ in range(tc):
    n,s=int(next(it)),next(it)
    total_pair=n-1
    for i in range(n-2):
        if s[i]==s[i+2]:
            total_pair-=1
    print(total_pair)        