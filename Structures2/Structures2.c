#include<stdio.h>
#include<string.h>

struct address{
	
	char mahalle[15];
	char cadde[20];
	char sokak[15];
	
	
};

struct ogrenci{
	char isim[20];
	char soyIsim[20];
	int numara;
	int yas;
	
	struct address adres;
	
	
	
};

int main(){
	
	struct ogrenci ogrenci1;
	
	strcpy(ogrenci1.isim,"Mustafa");
	strcpy(ogrenci1.soyIsim, "Baltaci");
	ogrenci1.numara = 132;
	ogrenci1.yas = 24;
	strcpy(ogrenci1.adres.mahalle,"Bahcelievler");
	strcpy(ogrenci1.adres.cadde,"7.cad");
	strcpy(ogrenci1.adres.sokak,"1032 sok.");
	
	printf("%s %s %d %d %s %s %s",ogrenci1.isim,ogrenci1.soyIsim,ogrenci1.numara,ogrenci1.yas,ogrenci1.adres.mahalle,ogrenci1.adres.cadde,ogrenci1.adres.sokak);
	
	
}
