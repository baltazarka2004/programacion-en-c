#include<stdio.h>
#include<ctype.h>
int main()
{
    char algo;
    fflush(stdin);
    scanf("%c",&algo);
    algo=toupper(algo);
    printf("%c",algo);
}