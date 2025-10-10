n , q  = input().split()
n = int(n)
q = int(q)

v = list(map(int,input().split()))

for i in range(1,n):
    v[i] = v[i] + v[i-1]

for i in range(0,q):
    a , b  = input().split()
    a = int(a)
    b = int(b)
    a-=1
    b-=1

    if(a == 0):
        print(v[b])

    else:
        print(v[b]-v[a-1])