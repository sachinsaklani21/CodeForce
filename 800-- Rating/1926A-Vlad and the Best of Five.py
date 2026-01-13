import sys
from collections import Counter
data=sys.stdin.read().split()
it=iter(data)
tc=int(next(it))
for _ in range(tc):
    s=next(it)
    counter=Counter(s)
    print(max(counter,key=counter.get))
