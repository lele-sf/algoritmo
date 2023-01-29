#include <stdio.h>
int main()
{
    int i, n, t1 = 0, t2 = 1, proxTermo;
    printf("Digite o numero de termos: ");
    scanf("%d", &n);
    printf("Sequencia de Fibonacci: ");
    for (i = 1; i <= n; i++)
    {
        printf("%d, ", t1);
        proxTermo = t1 + t2;
        t1 = t2;
        t2 = proxTermo;
    }
    return 0;
}




