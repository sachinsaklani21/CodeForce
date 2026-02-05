import sys
data=sys.stdin.read().split()
it=iter(data)
tc=int(next(it))
for _ in range(tc):
    length=int(next(it))
    s=[int(num) for num in next(it)]
    l,r=0,length-1
    while s[l]!=s[r] and l<r:
        l+=1
        r-=1
        length-=2
    print(max(0,length))    



