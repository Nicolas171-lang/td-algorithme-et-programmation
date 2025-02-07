#include <stdio.h>
int main ()
{
float n1, n2 ,n3 ,temps;	

printf ("\n Entrer la premiere nombre =");	
scanf ("%f",&n1);	
printf ("\n Entrer la deuxieme nombre = ");
scanf ("%f",&n2);
printf ("\n Entrer la troisieme nombre =  ");
scanf ("%f",&n3);

temps = n1;
   n1 = n2;
   n2 = n3;
   n3 = temps;

printf ("Les valeurs changers des trois nombres sont :\n n1 = %f \n n2 = %f\n et n3 = %f\n",n1,n2,n3);
return (0);
}
