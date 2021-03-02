number = int(input("Please insert positive number"))
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
