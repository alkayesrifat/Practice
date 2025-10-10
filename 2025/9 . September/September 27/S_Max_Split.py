s = input()
r = 0
l = 0 
ans = ""
v = []
for char in s:
    if(char == 'L'):
        l+=1
        ans+=char
    else:
        r+=1
        ans+=char
    if(l == r):
        v.append(ans)
        ans = ""
print(len(v))
for i in v:
    print(i)
        
