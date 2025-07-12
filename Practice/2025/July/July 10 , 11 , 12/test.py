t = int(input(""))

for i in range(1, t + 1):
    n = int(input(""))

    arr = list(map(int, input().split()))
    if len(arr) != n:
        arr = [int(input()) for _ in range(n)]
        
    
    arr.sort()

    arr[0] = arr[0 ] + 1

    pro = 1

    for num in arr:
        pro *= num
    print(pro)

    
    