#include <stdio.h>
int main () 
{
int i = 1,
	n = 0;
long long	factoriel = 1;
		
printf (" Entrer la valeur de n =");
scanf ("%d",&n);
		
if (n < 0 ) 
   {
	printf ("Entrer un valeur positif pour n");
		
	}
else 
     {
	  for ( i =1 ; i <= n ; i++) 
	      {
		   factoriel *= i;
				
		  }
	  printf ("%d! = %lld",n,factoriel);
	 }
	
	return 0;
}
	        
