#include <stdio.h>
#include <stdlib.h>

int main(){
	
	double sayi,sonuc1,sonuc2;
	
	printf("Degeri Girin: \n");
	scanf("%lf",&sayi);
	
	sonuc1 = floor(sayi);
	sonuc2 = ceil(sayi);
	
	printf("Floor Sonuc: %.1lf \n",sonuc1);
	printf("Ceil Sonuc: %.1lf \n",sonuc2);
	
	
	return 0;
}
