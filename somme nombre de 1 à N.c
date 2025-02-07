#include <stdio.h>
int main () 
{
int i = 0,
	n = 0;
long somme = 0;
	
printf (" Entrer la valeur de n =");
scanf ("%d",&n);
if (n < 0) 
   {
	printf ("Entrer une valeur positif pour n");
   } 
else 
    {
	 for ( i = 0; i <= n; i++) 
	     {
		  somme += i;
		 }
	 printf ("La somme de 1 à %d = %ld",n,somme);
	}
		
	
return (0);
}
