#include <stdio.h>
int main()
{
    float dias,anos,redMin,redDias;
    printf("Digite a quantidade de cigarros fumados por dia: ");
    scanf("%f",&dias);
    printf("Digite a quantidade de quantos anos voce ja fuma: ");
    scanf("%f",&anos);
    redMin = anos * 365 * dias * 10;
    redDias = redMin / (24*60);
    printf("Reducao do tempo de vida eh %.2f dias",redDias);
    return 0;
}
