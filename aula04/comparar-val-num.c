#include <stdio.h>

// 0 = false; 1 = true
/*
int main()
{
    int a,b,c;
    a = 2;
    b = 3;
    c = 5;
    printf("%d",c=a+b);

    return 0;
}*/
int main () {
    int l1,l2,l3;
    printf("Digite o primeiro lado: ");
    scanf("%d",&l1);
    printf("Digite o segundo lado: ");
    scanf("%d",&l2);
    printf("Digite o terceiro lado: ");
    scanf("%d",&l3);
    if ((l1 == l2) && (l2 == l3)) {
        printf("Triangulo equilatero"); }
    else{
     if( (l1 != l2) || (l1 != l3) || (l2 != l3)){
            printf("Triangulo escaleno"); }
    return 0;
}
}
