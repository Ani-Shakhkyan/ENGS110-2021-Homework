import math
number = int(input("Please inser a number"))
is_prime = 0
n_sqrt = math.sqrt(number)
i = 2
if(number == 1):
    print("Inserted number is not prime")
while(i <= int(n_sqrt)):
    if(number % i == 0):
        print("inserted number is not prime")
        quit()
    if(i == int(n_sqrt)):
        print("Number is prime")
        quit()
    i += 1

