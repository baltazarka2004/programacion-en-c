/*Se sabe que como máximo en una comisión de Elementos de Programación hay 80 alumnos. De cada
alumno se conoce:
• Número de DNI (entero).
• Apellido y Nombre (80 caracteres).
• Nota1, Nota2 (entero).
• Nota Promedio (real, calculado según Nota1 y Nota2).
Se solicita:
a. Declarar un tipo de dato que contenga la información del alumno.
b. Declarar un vector de estructuras del tipo de dato creado en el punto a.
c. Cargar en un vector de estructuras, los datos referentes a los alumnos de la comisión, esta
información termina con DNI igual al 0. Función INGRESO.
d. Indicar cuántos alumnos aprobaron (ambos parciales con nota >= 4 y cuántos reprobaron la
materia. Función RESULTADO.
e. Informar los datos de los alumnos de (DNI – Apellido y Nombre – Nota Promedio) de los alumnos.
PROMOCIONADOS (ambas notas >= 7). Función INFORME_PROMO.*/

#include <stdio.h>
#include <stdlib.h>
typedef struct 
{
    int dni;
    char pers [81];
    int n1;
    int n2;
    float prom;
}alum;
int ingreso(alum[],int);
void resultado(alum[],int);
void informe_promo(alum[],int);
int validar(int,int,int);
int repetido(int,alum[],int);
int main()
{
    int ce = 80,ceR;
    alum alumnos[ce];
    ceR = ingreso(alumnos,ce);
    resultado(alumnos,ceR);
    informe_promo(alumnos,ceR);
    return 0;
}

int ingreso(alum v[],int ce)
{
    int val,cont = 0;
    do
    {
        printf("\ningrese DNI del alumno:");
        scanf("%d",&val);
        if(validar(0,99999999,val) == 0)
            printf("\ndni invalido");
        system("pause");
        system("clr");

    }while (validar(0,99999999,val) == 0);
    while (val != 0 && cont < ce)
    {
        v[cont].dni = val;
        printf("\ningresar nombre y apellido (80 caracteres): ");
        fflush(stdin);
        gets(v[cont].pers);
        do
        {
            printf("\ningresar primera nota del alumno:");
            scanf("%d",&val);
            if(validar(0,10,val) == 0)
                printf("\nnota invalida");
            system("pause");
            system("clr");
        } while (validar(0,10,val) == 0);
        v[cont].n1 = val;
        do
        {
            printf("\ningresar segunda nota del alumno:");
            scanf("%d",&val);
            if(validar(0,10,val) == 0)
                printf("\nnota invalida");
            system("pause");
            system("clr");
        } while (validar(0,10,val) == 0);
        v[cont].n2 = val;
        v[cont].prom = v[cont].n1+v[cont].n2 / 2;
        if(cont < ce-1)
            do
            {
                printf("\ningrese DNI del alumno:");
                scanf("%d",&val);
                if(validar(0,99999999,val) == 0 && repetido(val,v,cont) == 0)
                    printf("\ndni invalido o repetido");
                system("pause");
                system("clr");

            }while (validar(0,99999999,val) == 0 && repetido(val,v,cont) == 0);
        cont++;

    }
    return cont;
    
    

    
    
}

void resultado(alum v[],int ce)
{
    
    int i,desa = 0,aprob = 0;
    system("clr");
    for(i=0;i<ce;i++)
    {
        if(v[ce].n1 < 4 && v[ce].n2 < 4)
            desa++;
        else
            aprob++;

    }

    printf("\ncantidad de alumnos desaprobados: %d\ncantidad de alumnos aprobados:%d",desa,aprob);
}

void informe_promo(alum v[],int ce)
{
    int i,prom = 0;
    printf("\nalumnos apromocionados");
    printf("\nDNI\t\t\tNOMBRE COMPLETO\t\t\tNOTA PROMEDIO");
    for(i=0;i<ce;i++)
    {
        if(v[ce].n1 >= 7 && v[ce].n2 >= 7)
            printf("\n%-3d\t\t\t%-5c\t\t\t%-4f",v[i].dni,v[i].pers,v[i].prom);

            
    }
}

int validar(int inf,int sup,int val)
{
    if(inf <= val && sup >= val)
        return 1;
    else
        return 0;

}


int repetido(int val,alum v[],int ce)
{
    int i,pos = -1;
    for(i=0;i <= ce; i++)
        if(v[i].dni == val)
            pos = i;

    if(pos == -1)
        return 0;
    else
        return 1;
}
