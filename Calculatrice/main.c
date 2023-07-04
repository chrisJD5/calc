#include <stdio.h>
#include "operations.h"

int main()
{
float a,b;
int op;

printf("entrez un nombre \n");
scanf("%f",&a);
printf("entrez un  deuxieme nombre \n ");
scanf("%f",&b);
printf("choisir une opération  : \n");
printf("1.Addition \n2.soustraction \n3.multiplication \n4.division \n");

scanf("%d",&op);

switch (op)
{
     case 1:
     printf (" %.3f + %.3f = %.3f ",a,op,b,addition(a,b));
    break;
    case 2:
     printf (" %.3f - %.3f = %.3f ",a,op,b,soustraction(a,b));
    break;
    case 3:
    printf (" %.3f * %.3f = %.3f ",a,b,multiplication(a,b));
    break;
    case 4:
     printf (" %.3f / %.3f = %.3f ",a,op,b,division(a,b));
    break;

}


return 0;
    
}