
int fibonacci(int age)
{
    int i1 = 0;
    int i2 = 1;
    int i3 = 2;
    int hold = 0;
    while(i2 < age)
    {
        hold = i1;
        i1 = i2;
        i2 = hold + i1;
        i3 += i2;
        
    }
    return i3;
}

