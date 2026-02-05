import sys
input_data=sys.stdin.read().split()
t=iter(input_data)
test_case = int(next(t))
for _ in range(test_case):
    no_strings=int(next(t))
    string=[]
    for _ in range(no_strings):
        string.append(next(t))
    s=string[0]
    for i in range(1,no_strings):
        if string[i]+s<s+string[i]:
            s=string[i]+s
        else:
            s=s+string[i]
    print(s)            

