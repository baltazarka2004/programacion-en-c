/*
Ingresar nombre y DNI de los alumnos de un curso. Como máximo el curso puede tener 50 alumnos. La
carga finaliza con un alumno de nombre FIN. Luego de cargar los alumnos se pide:
a. Ingresar nombres de a uno en uno y buscarlos. Si el nombre está en el curso mostrar su DNI y sino
informar que no está. Seguir ingresando nombres hasta que se ingrese un nombre igual a
NOBUSCARMAS.
b. Mostrar el listado de alumnos ordenado alfabéticamente de menor a mayor.
*/

#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
void cargar(char [][51],int,int[]);
int validar(int,int,int);

int main()
{
    int max = 49;
    int cont = 0;
    int val,val2;
    char nom [50][51];
    int dni [50];
    carga(nom,max,dni);
    
    
    

    
}

void carga(char nom[][51],int max,int dni)
{
    int cont;
    int val,val2;
    cont = 0;
    printf("\ningresar nombre del alumno:");
    gets(nom[cont]);
    while (tolower(nom[cont]) != "fin" || cont <= max)
    {
        do
        {
            printf("\ningresar dni:");
            scanf("%d",&val);
            if(val2=validar(0,99999999,val) == 1)
                printf("\n valor incorrecto volver a ingresar......");
            
        }while (val2=validar(0,99999999,val) == 1);
        dni[cont] = val;
        cont++;
        if (cont =! 50)
        {
            printf("\ningresar nombre del alumno:");
            gets(nom[cont]);
        }
        
        

        
    }
}