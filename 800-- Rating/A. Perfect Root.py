def ques():
    n=int(input())
    a=list(map(int,input().split()))
    sort_a=sorted(list(set(a)))
    if not sort_a:
        print(0)
        return
    max_MEX=0
    cons=1
    for i in range(1,len(sort_a)):
        if sort_a[i]==sort_a[i-1]+1:
            cons+=1
        else:
            max_MEX=max(max_MEX,cons)
            cons=1
    max_MEX=max(max_MEX,cons)
    print(max_MEX)        
t=int(input())
for _ in range(t):
    ques()