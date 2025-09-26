n = int(input())
ans = 0 

first = 0
second = 1

if(n == 1):
    print(0)
    
else:

    for i in range(3,n+1):
        crr = first + second
        first = second
        second = crr

    print(second)