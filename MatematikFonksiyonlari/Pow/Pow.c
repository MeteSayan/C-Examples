#include <stdio.h>
#include <stdlib.h>

int main(){
	
	double sayi1,sayi2,sonuc;
	
	printf("Tabani girin: \n");
	scanf("%lf",&sayi1);
	printf("Ussu girin: \n");
	scanf("%lf",&sayi2);
	
	sonuc = pow(sayi1,sayi2);
	printf("Sonuc: %.2lf",sonuc);
	
	
	return 0;
}
