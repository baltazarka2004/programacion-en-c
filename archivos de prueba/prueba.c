#include<stdio.h>
int main()
{
    int numero,cifra,cifra2,cifra3,aux;
    printf("ingrese un numero de 4 cifras: ");
    scanf("%d",&numero);
    cifra=numero/1000;
    aux=numero%1000;
    cifra2=aux/100;
    aux=aux%100;
    cifra3=aux/10;
    aux=aux%10;
    numero=cifra+cifra2+cifra3+aux;
    numero=(numero/10)+(numero%10);
    numero=(numero/10)+(numero%10);
    printf("\nel resultado de la suma de las cifras es de %d",numero);

}
