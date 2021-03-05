import math
number = int(input("Please insert positive number"))

def binary(number):
    remainder = 0
    list = []
    while(number > 1):
      remainder = int(number % 2)
      number //= 2
      list.append(remainder)
    if(number == 1):
        list.append(1)
    elif(number == 0):
        list.append(0)
    length = len(list)
    while(length > 0):
        print(list[length - 1], end = "")
        length -= 1
    print("")

def fibonacci(number):
    i1 = 1
    i2 = 1
    i3 = 2
    hold = 0
    while(i2 < number):
        hold = i1
        i1 = i2
        i2 = hold + i1
        i3 += i2
    print(i3)

def prime(number):
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
fibonacci(number)
binary(number)
prime(number)