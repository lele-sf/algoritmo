#include <stdio.h>
int main()
{
    int i = 1,n;
    printf("Digite um numero para saber sua tabuada: ");
    scanf("%d",&n);
    do { printf("%d X %d = %d\n",n,i++,n*i); }
    while (i<=10);
    return 0;
}
