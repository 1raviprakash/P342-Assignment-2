#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a[3] = {14, 18, 22}, b[3] = {21, 25, 29};
    int sum[3], dot = 0;
    for (int i = 0; i < 3; i++)
    {
        sum[i] = a[i] + b[i];
        dot = dot + (a[i] * b[i]);
    }
    printf("Sum of the Matrices is \n");
    for (int i = 0; i < 3; i++)
    {
        printf("%d\n", sum[i]);
    }
    printf("Dot product of Matrices is = %d", dot);
}
