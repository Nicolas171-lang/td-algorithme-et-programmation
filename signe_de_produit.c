#include <stdio.h>
int main ()
{
float n1,n2;	

printf ("Entrer la valeur de la premiere nombre =\n");	
scanf ("%f",&n1);	
printf ("Entrer la valeur de la deuxieme nombre =\n");	
scanf ("%f",&n2);	
	
if ((n1 == 0 || n2 == 0) || (n1 == 0 && n2 == 0))	
	{
	printf ("Leur produit est nul.\n");	
	}
else if ((n1 < 0 && n2 < 0) || (n1 > 0 && n2 > 0)) 	
	{
	printf ("Leur produit est positif.\n");	
	}
	else 
	{
	printf ("Leur produit est négatif.\n");	
	}
	
	return (0); 
}
