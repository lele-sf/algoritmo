#include <stdio.h>

char m[3][3] = {{' ', ' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '}};

void imprimeTabuleiro() {
    int l,c;
    for(l=0;l<3;l++) {
        for(c=0;c<3;c++) {
            printf(" %c ", m[l][c]);
            if (c < 2) {
                printf(" |");
            }
        }
        printf("\n");
        if(l<2) {
            printf(" ---+----+----\n");
        }
    }
}
int main()
{
    int l, c, jogador = 1;
    char marcador;

    printf("\nJOGADOR 1 = X\nJOGADOR 2 = O\n\n");

    while(1) {
            imprimeTabuleiro();

        printf("Jogador %d, escolha uma linha e coluna (de 0 a 2): ", jogador);
        scanf("%d%d", &l,&c);
               if (m[l][c] != ' ') {
            printf("Posicao ja marcada!\n");
            continue;
        }
        marcador = (jogador == 1) ? 'X' : 'O';
        m[l][c] = marcador;

        if ((m[0][0] == marcador && m[1][1] == marcador && m[2][2] == marcador) ||
            (m[0][2] == marcador && m[1][1] == marcador && m[2][0] == marcador) ||
(m[0][0] == marcador && m[0][1] == marcador && m[0][2] == marcador) ||
(m[1][0] == marcador && m[1][1] == marcador && m[1][2] == marcador) ||
(m[2][0] == marcador && m[2][1] == marcador && m[2][2] == marcador) ||
(m[0][0] == marcador && m[1][0] == marcador && m[2][0] == marcador) ||
(m[0][1] == marcador && m[1][1] == marcador && m[2][1] == marcador) ||
(m[0][2] == marcador && m[1][2] == marcador && m[2][2] == marcador)) {
    printf("Jogador %d venceu!\n", jogador);
    imprimeTabuleiro();
        break;
    }
       jogador = (jogador == 1) ? 2 : 1;
}
    return 0;
}
