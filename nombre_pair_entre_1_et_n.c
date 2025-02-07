#include <stdio.h>
int main ()
{
int i, n = 2;

printf ("Entrer la valeur de n = "); 
scanf ("%d",&n);

if (n <= 1)
   {
	 printf ("Veuillez entrer un nombre superieur à 1 pour n .");
   }
else 
   {   	
printf ("\n\n Les nombres pair entre 1 et %d sont :",n);

for (i = 2; i <= n;i = i+2)
    {
		printf ("\n \t %d",i);	
    }
   }
return (0);
}
