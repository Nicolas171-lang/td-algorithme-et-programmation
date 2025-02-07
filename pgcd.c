#include <stdio.h>
int main () 
{
int a, b, t, n1, n2;
 
printf ("Entrer la première nombre :");
scanf ("%d",&a);
printf ("Entrerla deuxième nombre : ");
scanf ("%d",&b);
    
n1 = a;
n2 = b;
    
while ( b > 0 ) 
      {
	   t = b;
	   b = a % b;
	   a = t;
      }
printf (" PGCD (%d , %d) = %d\n",n1,n2,a);
 
return (0);
}
