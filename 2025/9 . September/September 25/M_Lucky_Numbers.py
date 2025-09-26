a, b = input().split()

a = int(a)
b = int(b)
cnt = 0
for i in range(a , b+1):
    st = str(i)
    ace = False
    for c in st:
        if(c!='4' and c!='7'):
            ace = True
            break
    if(ace == False):
        print(i,end=" ")
        cnt+=1
if cnt <= 0 :
    print(-1)



