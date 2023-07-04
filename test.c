#include<stdio.h>
#include "operations.h"

int main()

{

float a,b;

a=5;b=0;
printf(" %.3f  + %.3f  = %.3f     resultat attendu  %.3f  \n",a,b,addition(a,b),5.f);
printf(" %.3f  - %.3f  = %.3f     resultat attendu  %.3f \n",a,b,soustraction(a,b),5.f);
printf(" %.3f  * %.3f  = %.3f     resultat attendu  %.3f  \n",a,b,multiplication(a,b),0.f);
printf(" %.3f  ∕ %.3f  = %.3f      resultat attendu  %.3f \n",a,b,division(a,b),0.f);

a=4;b=6;
printf(" %.3f  + %.3f  = %.3f     resultat attendu  %.3f  \n",a,b,addition(a,b),10.f);
printf(" %.3f  - %.3f  = %.3f     resultat attendu  %.3f  \n",a,b,soustraction(a,b),-2.f);
printf(" %.3f  * %.3f  = %.3f     resultat attendu  %.3f  \n",a,b,multiplication(a,b),24.f);
printf(" %.3f  ∕ %.3f  = %.3f      resultat attendu  %.3f  \n",a,b,division(a,b),0.667f);

a=23;b=1;
printf(" %.3f  + %.3f  = %.3f     resultat attendu  %.3f   \n",a,b,addition(a,b),24.f);
printf(" %.3f  - %.3f  = %.3f     resultat attendu  %.3f   \n",a,b,soustraction(a,b),22.f);
printf(" %.3f  * %.3f  = %.3f     resultat attendu  %.3f   \n",a,b,multiplication(a,b),23.f);
printf(" %.3f  ∕ %.3f  = %.3f      resultat attendu  %.3f   \n",a,b,division(a,b),23.f);

   return 0;
}