#include <stdio.h>
	int main() {
		float VE,VC,VF,a;
		do {
            printf ("Digite a sua media de VE:\n");
            scanf ("%f", &VE);
            if (VE >= 0 && VE<=10){
                printf ("Digite a nota da VC:\n");
                scanf ("%f", &VC);
                if (VC >= 0 && VC <=10){
                    VF = (20 - (VE + VC))/2;
                    if (VF <= 4 ){printf("Voce precisa tirar 4 na VF!\n");
                    }
                    else {printf ("Voce precisa tirar %.3f na VF!\n\n",VF);
                    }
                }
                else { printf("ERRO!\n");
                }
            }
            else { printf("ERRO!\n");
            }
            printf ("Para sair do processo digite 0:\n");
            scanf ("%f", &a);
		}
		while ( a != 0);
		return 0;}
