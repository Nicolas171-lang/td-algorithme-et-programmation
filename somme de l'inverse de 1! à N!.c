#include <stdio.h>
int main () 
{
int i = 1, n = 1;
long long f = 1;
float inv = 0;
			  
printf ("Entrer la valeur de n = ");		  	
scanf ("%d",&n);
	
if ( n <= 0) 
   {
	 printf ("\n Entrer la valeur positif de n ");
   }
else 
   {
	 for ( i = 1 ; i <= n ; i++ )
	     {
          f *= f * i;
          inv += 1.0/f;
		  
	     }
	 printf ("La somme de (1/1! à 1/%d!)= %lf",n,inv);
	}
	   
return (0);
}
