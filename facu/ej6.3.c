#include <stdio.h>
int cuadrante(int, int);
int puntaje(int,int,int,int,int);
int main()
{
int c_total,band,total,part,x,y,cua,punt,punt_may,part_may,i,c1=0,c2=0,c3=0,c4=0,c=0;
c_total=0;
band=0;
total=0;
printf("ingresar numero de participante: ");
scanf("%d",&part);
while (part>0)
{
    c1=0;
    c2=0;
    c3=0;
    c4=0;
    c=0;
    for(i=1;i<=5;i++)
    {
        printf("\ningresar tiros efectuados (x): ");
        fflush(stdin);
        scanf("%d",&x);
        printf("\ningresar tiros efectuados (y):");
        fflush(stdin);
        scanf("%d",&y);
        cua=cuadrante(x,y);
        switch (cua)
        {
        case 1:
                c1++;
                break;
        case 2: 
                c2++;
                break;
        case 3: 
                c3++;
                break;
        case 4:
                c4++;
                break;
            
        
        case 0: 
            c++;
            break;
        }
       
        punt=puntaje(c1,c2,c3,c4,c);
    }
    printf("\nel participante numero %d obtuvo un total de %d puntos\n dispardos efectuados en los cuadrante:\n 1er cuadrante: %d\n 2do cuadrante: %d\n 3er cuadrante: %d\n 4to cuadrante: %d\n disparos en el centro: %d",part,punt,c1,c2,c3,c4,c);
    c_total+=c;
    if(band==0||punt>punt_may)
    {
        band=1;
        punt_may=punt;
        part_may=part;
    }
    printf("\ningresar numero de participante: ");
    scanf("%d",&part);
    
}
printf("\nel ganador del concurso es el participante numero %d, con un total de %d puntos",part_may,punt_may);
printf("\nhubo un total de %d tiros al centro",c_total);
}

int cuadrante (int x, int y)
{
    int cua;
    if(x>0 && y>0)
    cua=1;
    else if (x<0 && y>0)

    {
        cua=2;
    }
    else if (x<0 && y<0)
    {
        cua=3;
    }
    else if (x>0 && y<0)
    {
        cua=4;
    }
    else
    {
        cua=0;
    }
    return (cua);
    
}

int puntaje(int c1,int c2, int c3, int c4, int c)
{
    int total;
    total=(50*(c1+c2))+((c3+c4)*40)+(c*100);
    return (total);
}

    
    
