#include <stdio.h>
int main ( ) 
{
int i , N ;
	    
printf ("Entrer la valeur de N = "); 
scanf ("%d",&N);
printf (" Les diviseurs de %d sont :\n ",N);
	    
for (i = 1 ; i <= N ;i++ ) 
   {
	if ( N % i == 0 )
	  {
	   printf ("%d\n",i);
	  }
			
   }
	return (0) ;
}
