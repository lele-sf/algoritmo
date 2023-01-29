#include <stdio.h>
int main()
{
    int i = 0,c = 10,num,cont=0;
    while (i<=10){
        printf("%d\n",i++);
   }
    while (c>=0) {
        printf("%d\n",c--);
    }
    printf("Digite um numero: ");
    scanf("%d",&num);
    while (cont<=num) {
        printf("%d\n",cont++);
    }
    return 0;
}
