/*Un laboratorio dispone de una lista con sus 50 medicamentos. De cada uno conoce:
• Código del medicamento (entero, de 3 cifras).
• Precio (real).
• Stock (entero).
Se solicita:
a. Declarar un tipo de dato que contenga la información del medicamento.
b. Declarar un vector de estructura de tipo de datos creado en a.
c. Cargar en un sector de estructuras, los datos referentes a los medicamentos. Función INGRESO.
d. Consultar el precio según código del medicamento. Función BUSQUEDA_MEDI.
e. Informar los códigos de los medicamentos cuyo stock es inferior a 10 unidades. Función INFORME.
*/
#include <stdio.h>
#include <stdlib.h>
typedef struct 
{
    int cod;
    float pre;
    int stock;
}medicina;
void ingreso(medicina[],int); /*cantidad de elementos con la lista*/
void busqueda_medi(int,int,medicina[]);
void informe(medicina[],int);
int validar(int,int,int);
int repetido(int,int,medicina[]);
int main()
{
    int ce = 3,cod;
    medicina lista[ce];
    ingreso(lista,ce);
    do
    {
        printf("\ningrese codigo para buscar precio del producto(0 para finalizar)");
        scanf("%d",&cod);
        if(validar(100,999,cod) == 0 && cod !=0 ) 
            printf("\ncodigo no valido, volver a ingresar");
        system("pause");
        system("clear");
    }while (validar(100,999,cod) == 0 && cod !=0);
    while (cod != 0)
    {
       busqueda_medi(cod,ce,lista);
       do
        {
            printf("\ningrese codigo para buscar precio del producto(0 para finalizar)");
            scanf("%d",&cod);
            if(validar(100,999,cod) == 0 && cod !=0 ) 
                printf("\ncodigo no valido, volver a ingresar");
            system("pause");
            system("clear");
        }while (validar(100,999,cod) == 0 && cod !=0); 
    }
    informe(lista,ce);
    return 0;
}

                                    /*FUNCIONES*/

void ingreso(medicina v[],int ce)
{
    int cont=0,val;
    float val2;
    while(cont < ce)
    { 
        do
        {
            printf("\ningrese codigo del medicamento(numero de 3 cifras):");
            scanf("%d",&val);
            if(validar(100,999,val) == 0 || repetido(val,ce,v) == 0)
                printf("\ncodigo no valido\n");
            system("pause");
            system("clr");

        } while (validar(100,999,val) == 0 || repetido(val,ce,v) == 0);
        v[cont].cod = val;
        do
        {
            printf("\ningresar precio:");
            scanf("%f",&val2);
            if (val2 < 0)
                printf("\nprecio negativo,ingrese de nuevo");
            system("pause");
            system("clr");
            
        }while(val2 < 0);
        v[cont].pre = val2;
        do
        {
            printf("\ningrese stock:");
            scanf("%d",&val);
            if (val < 0)
                printf("\ncantidad negativa, volver a ingresar");
            system("pause");
            system("clr");

            
        } while (val < 0);

        v[cont].stock = val;
        cont++;

        

    }
    
}


void busqueda_medi(int cod,int ce,medicina v[])
{
    int i,band = 0,pos;
    for(i = 0;i < ce; i++)
        if(v[i].cod == cod)
        {
            pos = i;
            band = 1; 
        }
    
    if( band == 1)
        printf("\nel producto %d, tiene un precio de %f",cod,v[pos].pre);
    else
        printf("\nproducto no encontrado");
}


void informe(medicina v[],int ce)
{
    int i;
    printf("\nmedicamentos cuyo stock es inferior a 10 unidades:");
    for(i = 0; i < ce ; i++ )
    
        if (v[i].stock < 10)
            printf("\n%d",v[i].cod);
    
        
}


int validar(int inf, int sup, int val)
{
    if(val >= inf && val <= sup)
        return 1;
    else
        return 0;
}


int repetido(int cod,int ce,medicina v[])
{
    int i,band = 1;
    for(i = 0 ; i < ce ; i++)
        if(v[i].cod == cod)
            band = 0;
    
    return band;

            
}
