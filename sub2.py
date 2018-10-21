def func2(arr, n):
    m = arr[0]
    ind = 0
    for i in range(len(arr)):
        if(arr[i] <= m):
            m = arr[i]
            ind = i
    for j in range((ind+1),(n+ind-1)):
        if(arr[j%n] > arr[(j+1)%n]):
            return False
    return True

n = int(input())
while(n>0):
    n=n-1
    x = int(input())
    arr = list(input().strip().split(' '))
    if(func2(arr, x)):
        print("YES")
    else:
        print("NO")
	
