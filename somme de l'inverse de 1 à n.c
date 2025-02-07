#include <stdio.h>
int main () 
{
int i = 1, N = 1;
float S = 0;
    
printf ("Entrer la valeur de N = ");
scanf ("%d",&N);     	
         	
if ( N <= 0) 
   {
	 printf ("Entrer un valeur positif de N");
   }
else 
   {
	 for ( i = 1 ; i <= N ; i++)
	     {
		   S += 1.0/i;
		 }
	 printf (" La somme S = 1/1 +...+1/%d = %.3f\n",N,S);
   } 
         	
return (0);
}
