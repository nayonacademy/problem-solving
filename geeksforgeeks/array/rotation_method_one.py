arr = [1,2,3,4,5,6,7,8]
n = 3
for i in range(0, n):
    first = arr[0]
    for y in range(0, len(arr)-1):
        arr[y] = arr[y+1]
    arr[len(arr)-1] = first
    
print(arr)