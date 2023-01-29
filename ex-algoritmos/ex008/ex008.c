#include <stdio.h>

int main() {
    float km,hm,dam,m,dm,cm,mm;
    printf("Digite uma distancia em metros: ");
    scanf("%f",&m);
    dm = m * 10;
    cm = dm * 10;
    mm = cm * 10;
    dam = m / 10;
    hm = dam / 10;
    km = hm / 10;
    printf("A distancia de %.2f em metros corresponde a:\n %.2f Km\t%.2f dm\n%.2f Hm \t%.2f cm\n%.2f Dam\t%.2f mm\n",m,km,dm,hm,cm,dam,mm);
    return 0;
}
