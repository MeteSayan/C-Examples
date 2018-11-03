#include <stdio.h>
#include <stdlib.h>

int main(){
	
	double derece,sonucsin,sonuccos;
	
	printf("Dereceyi girin: \n");
	scanf("%lf",&derece);
	
	sonucsin = sin(derece);
	sonuccos = cos(derece);
	
	printf("Sinus : %lf \n",sonucsin);
	printf("Cosinus : %lf\n",sonuccos);

	
	return 0;
}
