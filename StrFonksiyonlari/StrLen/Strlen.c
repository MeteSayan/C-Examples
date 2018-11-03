#include <stdio.h>
#include <stdlib.h>

int main(){
	
	char kelime[100];
	printf("Kelimeyi Girin: ");
	gets(kelime);
	printf("Karakter Uzunlugu: %d",strlen(kelime));
	
	return 0;
}
