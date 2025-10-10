class calculator:

    def add(self,a,b):
        return a +b
    def product(self,a,b):
        return a* b
    def div(self,a,b):
        return a / b
    

a = int(input())
b = int(input())

print(calculator().add(a,b))
print(calculator().product(a,b))
print(calculator().div(a,b))