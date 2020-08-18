
//Question three
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int matA[3] = {5, 12, 18};
    int i = 0;
    printf("Matrix A is: \n");
    for (i = 0; i < 3; i++)
    {
        printf("%d \n", matA[i]);
    }

    int matM[3][3] = {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}};
    int matN[3][3] = {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}};
    int matC[3][3] = {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}};
    int matD[3] = {0, 0, 0};

    FILE *openM;

    openM = fopen("m.txt", "r+");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            fscanf(openM, "%d", &matM[i][j]);
        }
    }
    fclose(openM);

    FILE *openN;

    openN = fopen("n.txt", "r+");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            fscanf(openN, "%d", &matN[i][j]);
        }
    }
    fclose(openN);

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                matC[i][j] += matM[i][k] * matN[k][j];
            }
        }
    }
    printf("Matrix M*N is: \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", matC[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            matD[i] = matD[i] + matM[i][j] * matA[j];
        }
    }

    printf("Matrix M*A is: \n");
    for (int i = 0; i < 3; i++)
    {
        printf("%d \n", matD[i]);
    }

    return 0;
}
// Matrix A is:
// 5
// 12
// 18
// Matrix M*N is:
// 330 396 462
// 726 891 1056
// 1122 1386 1650
// Matrix M*A is:
// 913
// 2068
// 3223
