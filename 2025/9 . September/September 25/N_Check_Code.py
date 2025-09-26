a,b = input().split()
a = int(a)
b = int(b)

s = input()

if (s[a] == '-' and (s.count('-')==1)):
    print("Yes")
else :
    print("No")