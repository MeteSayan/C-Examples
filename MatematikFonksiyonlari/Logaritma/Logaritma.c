#include <stdio.h>
#include <stdlib.h>

int main(){
	
	double sayi,sonuc;
	
	printf("Sayiyi giriniz\n");
	
	scanf("%lf",&sayi);
	sonuc = log(sayi);
	printf("Sonuc logaritma: %.10lf",sonuc);
	
	
	
	return 0;
}
