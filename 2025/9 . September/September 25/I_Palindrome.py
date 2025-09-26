val = input()

num = val[::-1]

pali = False

if num == val :
    pali = True

num = int(num)


print(num)

if pali == True:
    print("YES")
else :
    print("NO")
