#include <stdio.h>
#include <ctype.h>
int main ()
{

int efect=0,luz=0, band=0, total=0,fact,importe,metodo,importe_may,metodo_may;
char cod;

do
    {
        printf("ingresar codigo de importe ('A'-agua,'G'-gas,'T'-telefono,'L'-luz y 'F' -finalizar): ");
        fflush(stdin);
        scanf("%c",&cod);
        cod=toupper(cod);
        if(cod!='A' && cod!='T' && cod!='L' && cod!='G' && cod!='F')
            printf("\ncodigo invalido\n");
    }while(cod!='A' && cod!='T' && cod!='L' && cod!='G' && cod!='F');
    while(cod!='F')
    {
        if(cod=='L')
            luz++;
        do
        {
            printf("\ningresar numero de factura (numero entero entre 1000 y 80000): ");
            fflush(stdin);
            scanf("%d",&fact);
            if(fact<1000 || fact>80000)
                printf("\nfactura invalida\n");

        }while(fact<1000 || fact>80000);
        do
        {
            printf("\ningresar importe cobrado ( no debe ser ni menor a 1000, ni mayor a 50000): $");
            fflush(stdin);
            scanf("%d",&importe);
            if(importe<1000 || importe>50000)
                printf("\nimporte invalido\n");
        }while(importe<1000 || importe>50000);
        do
        {
            printf("\ningresar metodo de pago (1-efectivo, 2-tarjeta, 3- debito,4-mercado pago, 5-billetera virtual): ");
            scanf("%d",&metodo);
            if (metodo<1 || metodo>5)
                printf("\nmetodo invalido\n");
        } while (metodo<1 || metodo>5);
        if(band==0 || importe>importe_may)
        {
            band=1;
            importe_may=importe;
            metodo_may=metodo;

        }
        if(metodo==1)
            efect+=importe;

        total+=importe;
        do
    {
        printf("\ningresar codigo de importe ('A'-agua,'G'-gas,'T'-telefono,'L'-luz y 'F' -finalizar): ");
        fflush(stdin);
        scanf("%c",&cod);
        cod=toupper(cod);
        if(cod!='A' && cod!='T' && cod!='L' && cod!='G' && cod!='F')
            printf("\ncodigo invalido\n");
    }while(cod!='A' && cod!='T' && cod!='L' && cod!='G' && cod!='F');


    }
    printf("\nSe facturaron un total de %d facturas de luz\nEl mayor cobro fue con el metodo de pago numero %d\nEl total cobrado en efectivo es de $%d\n Y el importe total es  de $%d",luz,metodo_may,efect,total);
}
