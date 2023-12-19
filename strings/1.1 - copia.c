
#include <stdio.h>
#include <string.h>
void ingreso (char[]);
int main()
{
    char frases [501];
    printf("\ningresar una frase:");
    fflush(stdin);
    gets(frases);
    printf("la frase es: %s",frases);


}
