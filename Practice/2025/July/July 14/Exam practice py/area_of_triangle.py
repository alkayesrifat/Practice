import math

def triangle():

    a  = int(input("Enter the first number : "))
    b  = int(input("Enter the second number : "))
    c  = int(input("Enter the third number : "))

    if(a+b > c and b + c > a and c+ a > b):
        s = (a+b + c ) / 2 

        ans = math.sqrt(s*(s-a)*(s-b)*(s-c))
        print("the area of the triangle is " , ans)

    else:
        print("the triangle is not valid")


triangle()