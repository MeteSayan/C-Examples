#include<stdio.h>

struct ogrenci{
	char isim[20];
	char soyIsim[20];
	int numara;
};

int main(){
	
	struct ogrenci ogrenciler[3];
	
	int i;
	
	for(i = 0; i < 3 ; i++){
		
		printf("%d. ogrencinin bilgilerini girin\n",i+1);
		scanf("%s %s %d",&ogrenciler[i].isim,&ogrenciler[i].soyIsim,&ogrenciler[i].numara);
		
		
	}
	
	for(i = 0; i < 3; i++){
		
		printf("%d. ogrencinin bilgileri %s %s %d\n",i+1,ogrenciler[i].isim,ogrenciler[i].soyIsim,ogrenciler[i].numara);
		
	}
	
	
}
