#include <stdio.h>
int main ()
{
float n1,n2,somme,moyenne;

printf ("\n Entrer la premiere note = ");
scanf ("%f",&n1);
printf ("\n Entrer la deuxieme note = ");
scanf ("%f",&n2);

somme = n1 + n2;
moyenne = somme / 2;

printf ("Leus somme = %.2f\n",somme);
printf ("Leur moyenne = %.2f\n",moyenne);

return (0);	
}
