n = int(input())

v = list(map(int,input().split()))

r = v[::-1]

same = True

for i in range(0,n):

    if(v[i] != r[i]):
        same = False

if same:
    print("YES")
else:
    print("NO")