import sys
from collections import Counter
data=sys.stdin.read().split()
it=iter(data)
test_case=int(next(it))
for _ in range(test_case):
    n=int(next(it))
    s=next(it)
    t=next(it)
    if Counter(s)==Counter(t):
        print("YES")
    else:
        print("NO")
        
