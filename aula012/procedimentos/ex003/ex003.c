#include <stdio.h>
int main()
{
    int x,y;
    int soma (int A,int B)
    {
        A = A + 1;
        B = B + 2;
        printf("Valor de A = %d\n",A);
        printf("Valor de B = %d\n",B);
        printf("Soma A + B = %d\n",A+B);
    }
    x = 4;
    y = 8;
    soma(x,y);
    printf("Valor de X = %d\n",x);
    printf("Valor de Y = %d",y);
    return 0;
}
