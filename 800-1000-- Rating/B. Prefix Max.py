t=int(input())
for _ in range(t):
    l=int(input())
    arr=list(map(int,input().split()))
    index_change=arr.index(max(arr))
    arr[index_change],arr[0]=arr[0],arr[index_change]
    max_number=0
    max_sum=0
    for num in arr:
        if num>max_number:
            max_number=num
            max_sum+=num
        else:
            max_sum+=max_number
    print(max_sum)            
