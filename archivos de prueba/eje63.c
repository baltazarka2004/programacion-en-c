#include<stdio.h>
int tiro();
int cuadrante (int,int);//define el cuadrante
int puntaje(int,int,int,int,int);//saca el puntaje
int mian()
{
    int part,cua,x,y,c_total=0,punt,c1,c2,c3,c4,c,band=0,total=0,punt_may,part_may,i;
    printf("ingresar numero de participanta: ");
    scanf("%d",&part);
    while (part>0)
    {
        for(i=1;i<=5;i++) //ciclo de lanzamientos de flechas
        {
            x=tiro();
            y=tiro();
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
        c_total+=c;
        printf("\nel participante numero %d obtuvo un total de %d puntos,\ntiros efectuados:\ncuadrante 1: %d\ncuadrante 2: %d\ncuadrante 3: %d\ncuadrante 4: %d\ncentro: %d",part,punt,c1,c2,c3,c4,c);
        if (band==0 || punt>punt_may)// define quien gano
        {
            band==1;
            punt_may=punt;
            part_may=part;
        }
        printf("ingresar numero de participanta: ");
        scanf("%d",&part);
        
        
    }
    printf("\nel ganador del concurso es el participante numero %d con un total de %d puntos\n",part_may,punt_may);
    printf("hubo un total de %d tiros al centro",c_total);
    return 0;
}

int tiro()
{
    int x;
  printf("\ningresar cordenadas de tiro efectuado: ");
            scanf("%d",&x);
            return(x);  
}
int cuadrante(int x,int y)
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
        cua=0;

    return cua;
    
    
    
    
}
int puntaje(int c1,int c2,int c3,int c4,int c)
{
    int total;
    total=50*(c1+c2)+((c3+c4)*40)+(c*100);
    return total;
}