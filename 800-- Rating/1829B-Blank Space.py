import sys
data=sys.stdin.read().split()
it=iter(data)
tc=int(next(it))
for _ in range(tc):
    n=int(next(it))
    arr=[int(next(it)) for _ in range(n)]
    max_zeros=0
    count=0
    for i in range(n):
        if arr[i]==0:
            count+=1
            max_zeros=max(max_zeros,count)
        else:
            count=0    
    print(max_zeros)            
