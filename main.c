#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>
int main()
{setlocale(LC_ALL,"portuguese");
system("color A");
printf("                                                      BEM VINDO");

int repete=1;
float a,b;
float r;
float x;
do
{




printf("\nDIGITE UM VALOR EM A: ",a);
scanf("%f",&a);
printf("\nDIGITE UM VALOR EM B: ",b);
scanf("%f",&b);

printf("\nQUAL OPERAÇÃO VOCE QUER FAZER ?");
printf("\n1 = +");
printf("\n2 = -");
printf("\n3 = *");
printf("\n4 = /");
printf("\n");
scanf("\n%f",&r);

if(r== 1) {
    x = a + b;
    printf("\nRESPOSTA: %.2f", x);
}

if(r==2) {
    x = a - b;
    printf("\nRESPOSTA: %.2f",x);
}

if(r==3) {
    x = a * b;
    printf("\nRESPOSTA: %.2f",x);

}

if(r==4) {
    x = a / b;
    printf("\nRESPOSTA: %.2f",x);
}
printf("\nDESEJA CONTINUAR FAZENDO MAIS CONTAS ? 1 PARA SIM 2 PARA SAIR");
scanf("%d",&repete);

} while(repete==1);


    return 0;

}
