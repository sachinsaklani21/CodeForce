import sys
data=sys.stdin.read().split()
it=iter(data)
n=int(next(it))
s=next(it)
map=[0]*26
key_buy=0
for i in range(n-1):
    key=s[2*i]
    key_index=ord(key)-ord('a')
    map[key_index]+=1
    door=s[2*i+1]
    door_index=ord(door.lower())-ord('a')
    if map[door_index]>0:
        map[door_index]-=1
    else:
        key_buy+=1
print(key_buy)
