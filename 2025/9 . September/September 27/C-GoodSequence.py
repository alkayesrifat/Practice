dic = {'1': 0}

n = int(input())
v = list(map(str, input().split()))

for i in v:
    if i in dic:      
        dic[i] += 1
    else:              
        dic[i] = 1

cnt = 0 

for key,value in dic.items():

    n = int(key)

    koybar = value

    if n > value:
        cnt += value
    elif n < value:
        cnt += (value-n)

print(cnt)