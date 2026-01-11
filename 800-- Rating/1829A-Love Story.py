import sys
data=sys.stdin.read().split()
it=iter(data)
tc=int(next(it))
for _ in range(tc):
    s=next(it)
    match="codeforces"
    count=0
    for i in range(len(s)):
        if s[i]!=match[i]:
            count+=1
    print(count)        