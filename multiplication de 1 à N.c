#include <stdio.h>
int main ()
{
int i, n;
long long m = 1;

printf ("Entrer la valeur de n = ");
scanf ("%d",&n);

for (i = 1; i <= n; i++)
    { 
	  m *= i;  
    }
printf ("\n\n La multiplication 1*2*...*%d = %lld",n,m);

return (0);
}
