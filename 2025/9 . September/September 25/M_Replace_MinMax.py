n = int(input())
v = list(map(int, input().split())) 




mx = max(v) 
mn = min(v) 

mxind = v.index(mx)
mnind = v.index(mn)

temp = v[mxind]

v[mnind] = mx

v[mxind] = mn


for i in v:
    print(i,end=" ")