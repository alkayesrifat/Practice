def is_prime(n ):
    if n == 1 :
        return 1
    elif n == 2 :
        return 1
    else:
        for i in range(2,n):
            if(n % i == 0):
                return 0
        return 1

n = int(input("Enter the number : " ))

if is_prime(n) == 1 :
    print("The number",n,"is a prime number")
else:
    print("The number is not a prime number")
