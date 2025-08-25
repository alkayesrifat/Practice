def fectorial(n):
    if n==0:
        return 1
    else:
        return n*fectorial(n-1)

n  = int(input("Enter a Positive number : "))

if n < 0 :
    print("You entered a negative number , so try again ")
else :
    print("The factorial of ",n,"is:",fectorial(n))

# are you kidding with me ? i have to write this without vscode suggation , wth