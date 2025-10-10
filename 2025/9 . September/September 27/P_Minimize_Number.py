n = int(input())

v = list(map(int,input().split()))
cnt = 0
while True:

    odd = False

    for i in range(0,n):

        if(v[i] % 2 ==0):
            v[i] = v[i] / 2
        else:
            odd = True
            break
    


    if(odd == True):
        break
    cnt+=1

print(cnt)