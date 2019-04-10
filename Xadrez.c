#include<stdio.h>
int main() {
int i,d;
printf("Jogo de Xadrez:\n\n");
printf("     A      B      C      D      E      F      G      H   \n");
printf("  |------|------|------|------|------|------|------|------|\n");
printf("  |B     |P     |B     |P     |B     |P     |B     |P     |\n");
printf("1 |  Tp  |  Cp  |  Bp  |  Dp  |  Rp  |  Bp  |  Cp  |  Tp  |\n");
printf("  |------|------|------|------|------|------|------|------|\n");
printf("  |P     |B     |P     |B     |P     |B     |P     |B     |\n");
printf("2 |  Pp  |  Pp  |  Pp  |  Pp  |  Pp  |  Pp  |  Pp  |  Pp  |\n");
printf("  |------|------|------|------|------|------|------|------|\n");
for (i=3; i<7; i++){
        if (i%2 == 0){
printf("  |P     |B     |P     |B     |P     |B     |P     |B     |\n");
printf("%d |      |      |      |      |      |      |      |      |\n", i);
printf("  |------|------|------|------|------|------|------|------|\n");
}
else {
printf("  |B     |P     |B     |P     |B     |P     |B     |P     |\n");
printf("%d |      |      |      |      |      |      |      |      |\n", i);
printf("  |------|------|------|------|------|------|------|------|\n");
}}
printf("  |B     |P     |B     |P     |B     |P     |B     |P     |\n");
printf("7 |  Pb  |  Pb  |  Pb  |  Pb  |  Pb  |  Pb  |  Pb  |  Pb  |\n");
printf("  |------|------|------|------|------|------|------|------|\n");
printf("  |P     |B     |P     |B     |P     |B     |P     |B     |\n");
printf("8 |  Tb  |  Cb  |  Bp  |  Db  |  Rb  |  Bb  |  Cb  |  Tb  |\n");
printf("  |------|------|------|------|------|------|------|------|\n");
printf("Digite o nome da peça que quer mover\n");
printf("Digite qual posição quer colocar a peça\n");
return 0;
}
