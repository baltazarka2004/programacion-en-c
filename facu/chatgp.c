#include <stdio.h>
#include <stdlib.h> // Se agrega la biblioteca para usar system()

int main()
{
    int band_may = 0, band_men = 0, pos = 0, pos_may, pos_men, temp, temp_may, temp_men;
    
    printf("Ingresar una temperatura (ingresar el número -50 para finalizar): ");
    fflush(stdin);
    scanf("%d", &temp);
    
    while (temp != -50)
    {
        pos++;
        
        if (band_may == 0 || temp > temp_may)
        {
            band_may = 1;
            temp_may = temp;
            pos_may = pos;
        }
        
        if (band_men == 0 || temp < temp_men)
        {
            band_men = 1;
            temp_men = temp;
            pos_men = pos; 
        }

        printf("\nIngresar una temperatura (ingresar el número -50 para finalizar): ");
        scanf("%d", &temp);
    }
    
    printf("\nLa mayor temperatura ingresada fue la número %d con un valor de %d", pos_may, temp_may);
    printf("\nLa menor temperatura ingresada fue la número %d con un valor de %d", pos_men, temp_men);
    
    system("pause"); // Agregar una pausa antes de finalizar el programa
    
    return 0;
}

