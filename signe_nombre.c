#include <stdio.h>
int main () 
{
float n;
printf ("Entrer la valeur de n =");
scanf ("%f",&n);
if (n < 0) 
  {
  printf ("Le nombre %f est négatif.",n);
  }
else 
  {
  printf ("Le nombre %f est positif.",n); 
  }

   return (0);
}