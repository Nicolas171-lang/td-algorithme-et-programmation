#include <stdio.h>
#include <math.h>
int main () 
{
int i = 0,n = 0;
long long puissance = 1;
    
printf (" Entrer la valeur de n = ");
scanf ("%d",&n);    	 
        	 
if ( n < 0) 
   {
    printf ("Entrer autre valeur positif de n ");
	}
else
    {
	 for ( i = 1 ; i <= n ; i++) 
	 {
	  puissance += pow(10,i);
	 }
			
	 printf ("La somme de 1 à 10^%d = %lld\n",n,puissance);
	}
        	 
return (0);
}
