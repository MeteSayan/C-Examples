#include<stdio.h>
#include<string.h>


struct ogrenci{
	
	char isim[20];
	char soyIsim[20];
	int numara;
	
};

int main(){
	
	struct ogrenci *tut;
	struct ogrenci ogrenci1;
	
	strcpy(ogrenci1.isim,"Mustafa");
	strcpy(ogrenci1.soyIsim,"Coskun");
	ogrenci1.numara = 144;
	
	tut = &ogrenci1;
	
	printf("%s %s %d\n",ogrenci1.isim,ogrenci1.soyIsim,ogrenci1.numara);
	printf("%s %s %d\n",tut->isim,tut->soyIsim,tut->numara);
	
	
	
}
