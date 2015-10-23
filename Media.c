#include <stdio.h>

int main()
{
        float AV1, AV2, media;
    printf ("\nInforme a nota da AV1=\n");
    scanf ("%f", &AV1);
    printf ("\nInforme a nota da AV2=\n ");
    scanf ("%f", &AV2);
    media =(AV1 + AV2)/2;
    if (media >= 6.0)
        printf ("\nAprovado!! Sua media é = " "%f", media);
    else
        printf ("\nReprovado, Sua media foi = " "%f", media);
   
return 0;
}
