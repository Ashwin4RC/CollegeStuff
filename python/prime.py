import math

n = int(input("Enter the number: "))
prime = 1
if n<=1 or n%2==0 :
    prime = 0
else :
    root = math.sqrt(n)
    i = 3
    while i<=root :
        if n%i == 0:
            prime = 0
            break
if prime==1 :
    print(n," is prime")
else :
    print(n," is not prime")