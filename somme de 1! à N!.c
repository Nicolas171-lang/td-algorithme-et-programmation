#include <stdio.h>
int main () 
{
int i = 1, n = 1;
long long f = 1, s = 0;
	 
printf ("Entrer la valeur de n");         
scanf ("%d",&n);         

if ( n <= 0 ) 
   {
     printf ("Entrer une nombre positif pour n");
	} 
else
	 {
	   for ( i = 1 ; i <= n ; i++) 
	       {
			 f *= i;
			 s += f; 
			}
	   printf ("La somme de ( 1! à %d! ) = %lld",n,s);
	 }        
return (0);
}
