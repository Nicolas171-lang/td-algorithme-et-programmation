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
if (a == 1)
   {
	 printf ("les nombre %d et %d sont premiers entres eux",n1,n2);
   }
else 
    {
	  printf ("Les nombres %d et %d ne sont pas premiers entres eux",n1,n2);
	} 
return (0);
}
