#include <stdio.h>
int main ()
{
float n1, n2, moyenne;
int c1, c2;

printf ("\n Entrer la premiere note =");
scanf ("%f",&n1);
printf ("\n Entrer son coefficient =");
scanf ("%d",&c1);
printf ("\n Entrer la deuxieme  note =");
scanf ("%f",&n2);
printf ("\n Entrer son coefficient =");
scanf ("%d",&c2);

moyenne = ((n1 * c1) + (n2 * c2)) / (c1 + c2);

printf ("\n\n Leur moyenne est = %.2f",moyenne);

return (0);
}	
