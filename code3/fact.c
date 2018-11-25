#include<stdio.h>

int fact(int num);

int main(void)
{
    int answer;
    answer = fact(5);
    printf("Factorial is: %d", answer);
    return 0;
}

int fact(int num)
{
    if(num == 0)
    {
        return 1;
    }
    else
    {
        return num * fact(num - 1);
    }
}
