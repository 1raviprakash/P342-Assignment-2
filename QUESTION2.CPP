//Question one
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int num = 6, total = num * num;
    float sum = 0.0;
    for (int x = 0; x < num; x++)
    {
        for (int y = 0; y < num; y++)
        {
            sum = sum + abs(x - y);
        }
    }
    printf("Average distance between the two points = %f", sum / total);
}
