#include <stdio.h>
#include <stdlib.h>
void main() {
    int num1;

    printf("Ingrese el primer número: ");
    scanf("%d", &num1);

    if (num1 > 0) 
       {printf("el numero es positivo.\n", num1);} 

     else if (num1 < 0)

        {printf ("el numero es negativo.\n",num1);
        }
    
     else

      {
        printf("el numero es nulo.\n", num1);
    }

 system ("pause");
}