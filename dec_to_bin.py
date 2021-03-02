number = int(input("Please insert positive number"))
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
