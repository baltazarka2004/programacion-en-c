#include <stdio.h>
#include <ctype.h>
int main()
{
    int marco=0,dia=0, cont=0,prom=0;
    char resp;
    do
    {
        printf("\nmarco realmente la chupa-('S' para si, 'n' para no)\n");
        fflush(stdin);
        scanf("%c",&resp);
        resp=toupper(resp);
        getchar();

        if(resp=='N')

            printf("\nno te quedo claro que marco la chupa- volve a pensarlo y escribi tu respuesta");
        else
        {
            if (resp=='S')
                printf("\nefectivamente marco la va a chupar para toda la eternidad\n");
            else
                printf("\nflaquito vos pensas que al poner otra respuesta sos gracioso?? no flaco solo servis para comer pete\n");
        }
    }while(resp!='S');
    printf("\nexacto es chupador de pijas");
    printf("\nahora vamos con otra pregunta, �cuantas piajs chupa marco?\n");
    fflush(stdin);
    scanf("%d",&marco);
    if (marco>0)
        printf("\nmuy buena respuesta marco puede , repito puede chupar %d pijas, pero el en verdad come\n INFINITAS PIJAS",marco);
    printf("\nvamos a sacar el promedio de pijas , decime cuantas pijas comio maroc por dia\n");
    fflush(stdin);
    scanf("%d",&dia);
    printf ("\ncuantas pijas comio ese dia?\n");
    fflush(stdin);
    scanf("%d",&marco);
    cont++;
    while (dia>0)
    {
        printf("\nvamos a sacar el promedio de pijas , decime cuantas pijas comio maroc por dia\n");
        fflush(stdin);
    scanf("%d",&dia);
    printf ("\ncuantas pijas comio ese dia?\n");
    fflush(stdin);
    scanf("%d",&marco);
    prom+=marco;
    cont++;


    }
    prom=prom/cont;
    printf("\nmuy buen promedio este mes marco , tenes un promedio de %d, pero marco come pijas infinitas",prom);
    int system("pause");
}
