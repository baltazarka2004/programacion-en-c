#include <stdio.h>
int main()
{
    int band_may=0,band_men=0,pos=0,pos_may,pos_men,temp,temp_may,temp_men;
    
    printf("ingresar una temperatura(ingresar el numero -50 para finalizar): ");
    fflush(stdin);
    scanf("%d",&temp);
    while(temp != -50)
    {
        pos++;
        if(band_may == 0 || temp > temp_may)
        {
            band_may=1;
            temp_may=temp;
            pos_may=pos;
        }
    
    if(band_men == 0 || temp < temp_men)
    {
        band_men=1;
        temp_men=temp;
        pos_men=pos; 
    }

    printf("\ningresar una temperatura(ingresar el numero -50 para finalizar): ");
    scanf("%d",&temp);


    }
    printf("\nla mayor temperatura ingresada fue la numero %d con un valor de %d\ny la menor temperatura ingresada fue la numero %d con un valor de %d",pos_may,temp_may,pos_men,temp_men);
    
    
}