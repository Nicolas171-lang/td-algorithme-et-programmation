#include <stdio.h>
int main () 
{
	float a , b , c ;
	
	printf ( " Entrer a = ");
	scanf ("%f", &a);
	printf ( " Entrer b = ");
	scanf ("%f", &b);
	printf ( " Entrer c = ");
	scanf ("%f", &c);
	if ( a > b && a > c )  {
		printf ( " Le maximum est a = %f ", a);
	}
		else if ( b > a && b > c ) { 
			printf (" le maximum est b = %f",b);
			}
			else {
			printf ( " Le maximum est c = %f", c );
		}
return 0 ;
}
