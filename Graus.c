#include <stdio.h>

int main()
{
    float TempC, TempF;
    printf ("\nInforme Celsius= \n");
    scanf ("%f", &TempC);
    
    TempF =(TempC * 1.8 + 32);
    printf ("A Temperatura em F é =" "% .2f", TempF);
 
return 0;  
}