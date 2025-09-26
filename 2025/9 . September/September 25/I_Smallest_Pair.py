t = int(input())

while t >= 1:


    n = int(input())

    v = list(map(int,input().split()))
    ans = []
    for i in range (0,n):
        for j in range (i+1,n):
            cal = v[i] + v[j] + ((j + 1)-(i+1))
            ans.append(cal)
    
    print(min(ans))

    t-=1
