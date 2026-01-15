import sys
data=sys.stdin.read().split()
it=iter(data)
tc=int(next(it))
for _ in range(tc):
    s=next(it)
    s_len=len(s)
    p=0
    pair=0
    while p<=len(s)-1:
        if s[p]=="A":
            pair+=1
            p+=1
        else:
            if pair>0 and s[p]=="B":
                pair-=1
                s_len-=2
                p+=1
            else:
                pair+=1
                p+=1
    print(s_len)                    