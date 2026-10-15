#include <stdio.h>

int inc(int counter);

int main(void)
{
    int i = 10;
    printf("function call previous i = %d\n", i);
    inc(i);
    printf("function call after i = %d\n", i);
    return 0;
}

int inc(int counter)
{
    counter++;
    return counter;
}