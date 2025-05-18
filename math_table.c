#include <stdio.h>
int main()
{
    float cont, n, res;
    printf("Digite o numero que deseja a tabuada / Enter the number you want: \n");
    scanf("%f", &n);
    while (cont <= 4)
    {
        printf("soma / sum:\n");
        cont = 0;
        while (cont <= 10)
        {
            res = n + cont;
            printf("%f + %f = %f\n ", n, cont, res);
            cont++;
        }
        cont++;
        cont = 0;
        printf("subtracao / subtraction: \n");
        while (cont <= 10)
        {
            res = n - cont;
            printf("%f - %f = %f\n ", n, cont, res);
            cont++;
        }
        cont++;
        cont = 0;
        printf("multiplicacao / multiplication: \n");
        while (cont <= 10)
        {
            res = n * cont;
            printf("%f * %f = %f\n ", n, cont, res);
            cont++;
        }
        cont++;
        cont = 0;
        printf("divisao / division: \n");
        while (cont <= 10)
        {
            if (cont <= 10)
            {
                res = n / cont;
                printf("%f / %f = %f\n ", n, cont, res);
                cont++;
            }
            else if (cont == 0)
            {
                printf("Nao existe divisao por zero / There is no division by zero\n");
            }
        }
        cont++;
    }
    return 0;
}