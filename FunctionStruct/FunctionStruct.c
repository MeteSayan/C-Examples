#include<stdio.h>

struct ogrenci{
	
	char isim[20];
	char soyIsim[20];
	int numara;
	
};

void goster(struct ogrenci a){
	
	printf("Ogrencinin bilgileri: %s %s %d\n",a.isim,a.soyIsim,a.numara);
	
}

struct ogrenci degerAl(){
	struct ogrenci yeni;
	printf("Bilgilerini girin: \n");
	scanf("%s %s %d",&yeni.isim,&yeni.soyIsim,&yeni.numara);
	
	return yeni;
	
}

int main(){
	
	struct ogrenci ogrenci1 = {"Mustafa Murat","Coskun",156};
	
	goster(ogrenci1);
	
	struct ogrenci ogrenci2 = degerAl();
	
	goster(ogrenci2);
	
}
