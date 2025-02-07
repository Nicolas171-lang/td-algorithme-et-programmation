#include <stdio.h>
int main () {
	int n,i;
	float num,max;
	
	printf ("Entrer le nombre de valeur : ");
	scanf ("%d",&n);
	
	printf ("Entrer un nombre : ");
	scanf ("%f",&max);
	
	for ( i = 1; i < n ; i++) {
		printf ("Entrer un nombre : ");
		scanf ("%f",&num);
		if ( num > max) {
			max = num;
			
		}
	}	
		
		
		printf ("Le maximum est : %f\n",max);
	

	
	return 0;
	}
