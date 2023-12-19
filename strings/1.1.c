
#include <stdio.h>
#include <string.h>
void ingreso (char[]);
int main()
{
    char frases [501];
    int cant;
    printf("\ningresar una frase(max 500 caracteres):");
    fflush(stdin);
    gets(frases);
    cant = strlen(frases);

    

    printf("\nla frase es: %s",frases);
    printf("\ncantidad = %d",cant);


}
