/*Ingresar dos Strings, uno con el nombre y el otro con el apellido de una persona. Utilizando las
funciones de la biblioteca string.h generar un tercer string formado por: NOMBRE, APELLIDO (nombre
coma espacio y apellido) y mostrarlo
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char nombre[101];
    char apellido [101];
    char completo [201];
    printf("\ningrese su nombre:");
    fflush(stdin);
    gets(nombre);
    printf("\ningrese su apelldio:");
    fflush(stdin);
    gets(apellido);
    strcpy(completo,nombre);
    strcat(completo, ",");
    strcat(completo, " ");
    strcat(completo,apellido);
    printf("\nombre completo : %s",completo);


}