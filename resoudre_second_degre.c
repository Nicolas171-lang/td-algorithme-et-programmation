#include <stdio.h>
#include <math.h>

int main ()
{
float a,b,c,x1,x2,discriminant,partie_reelle,partie_imaginaire;	

printf ("Entrer la coefficient a =\n");	
scanf ("%f",&a);
printf ("Entrer la cofficient b =\n ");	
scanf ("%f",&b);
printf ("Entrer la coefficient c =\n ");	
scanf ("%f",&c);	

if (a == 0) 
   {
	if (b == 0) 
	{
		printf ("L'equation n'a pas de solution\n");
	}
		
		 else 
		 {
		x1 = -c / b;
		printf ("Une solution x1 = %.2f\n",x1);
		 }
   } 
 else 
   {
	discriminant = (b * b) -(4 * a * c);
	if (discriminant == 0)
	 {
		x1 = -b / (2 * a);
		printf ("Une racine double x1 = %.2f",x1);
		} 
		else if (discriminant  > 0) 
		{
		x1 = ( -b -(sqrt(discriminant))) / (2 * a);
		x2 = ( -b +(sqrt(discriminant))) / (2 * a);
		printf ("Deux solultions reelles : x1 = %.2f\n et x2 = %.2f\n",x1,x2);
		} 
		else 
		{
			partie_reelle = (-b) / (2 * a);
			partie_imaginaire = (sqrt(-discriminant)) / ( 2 * a);
		    printf ("Deux solutions complexes  :\n");
			printf ("x1 = %.2f - %.2fi\n et X2 = %.2f + %.2fi\n",partie_reelle, partie_imaginaire, partie_reelle, partie_imaginaire);
		 }
   }	
return (0);
	}
