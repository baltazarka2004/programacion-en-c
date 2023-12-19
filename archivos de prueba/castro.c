#include<stdio.h>
#include<ctype.h>
int menu();
int menu2();
int main()
{
float num1,num2,resultado;
int metodo,resto,resp;
printf("ingresar numero con los que desea trabajar\n");
    scanf("%f",&num1);
    printf("\n");
    scanf("%f",&num2);
    metodo = menu();
while(metodo!=6)
{
    switch (metodo)
    {
    case 1:
        resultado=num1+num2;
        printf("\n%.2f",resultado);
        break;
    case 2: 
        resultado=num1-num2;
                printf("\n%.2f",resultado);

        break;
    case 3: 
        resultado=num1*num2;
        printf("\n%.2f",resultado);
        break;
    case 4:
        if(num1==0)
            printf("error de operanding (pusiste un '0' como dividendo) ");
            else
            {
                resultado= num1/num2;
                resto=(int)num1%(int)num2;
                printf("\n%f",resultado);
                printf("\nresto: %f",resto);
            }
     break;
    
    
    }
    resp=menu2();
    if (resp==1)
    {
        metodo=menu();
    }
    else
    {
        printf("ingresar numero con los que desea trabajar\n");
        scanf("%f",&num1);
        printf("\n");
        scanf("%f",&num2);
        metodo=menu();
    }

    


}

}


int menu()
{
    int met;
    do
    {

    
    printf("\nMenu de opciones\n---- -- ---------\n1)suma\n2)resta\n3)multiplicacion\n4)divicion\n5)ingresar nuevo nuemro\n6)salir\ningresar su opcion: ");
    scanf("%d",&met);
    if(met<1 || met>6)
        printf("\nvalor invalido vuelva a ingresar\n");
    }while(met<1 || met>6);
    return met;
}

int menu2()
{
    int resp;
    do{

    
    printf("\n¿desea seguir trabajando con los mismos numeros?\n1)Si\n2)No\ningresar opcion:");
    scanf("%d",&resp);
    if(resp!=1 && resp!=2)
        printf("\nOpcion no valida\n");
    }while(resp!=1 && resp!=2);
    return resp;
}
