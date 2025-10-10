v = list(map(str,input().split()))

for i in range(0,len(v)):

    if(i == len(v)-1):
        print(v[i][::-1])
    else:
        print(v[i][::-1],end=" ")