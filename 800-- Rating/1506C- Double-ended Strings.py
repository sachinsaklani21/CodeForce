import sys
data=sys.stdin.read().split()
t=iter(data)
test_case=int(next(t))
for _ in range(test_case):
    a=next(t)
    b=next(t)
    x,y=len(a),len(b)
    sub_len=0
    for i in range(x):
        for j in range(i+1,x+1):
            sub_str=a[i:j]
            if sub_str in b:
                sub_len=max(len(sub_str),sub_len)
    print (x+y-2*sub_len)            
