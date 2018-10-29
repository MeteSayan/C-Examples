#include<stdio.h>
#include<string.h>


struct ogrenci{
	
	char isim[20];
	char soyIsim[20];
	int numara;
	
};

void degerAl(struct ogrenci *p){
	
	strcpy(p->isim,"Mehmet");
	strcpy(p->soyIsim, "Yildiz");
	p->numara = 333;
		
}

void goster(struct ogrenci *p){
	
	printf("Ogrencinin Bilgileri\nIsim: %s\nSoyisim: %s\nNumara: %d\n",p->isim,p->soyIsim,p->numara);
	
	
}



int main(){
	
	struct ogrenci ogrenci1 = {"Ahmet","Tekin",435};
	
	goster(&ogrenci1);
	
	degerAl(&ogrenci1);
	
	printf("%s\n %s\n %d\n", ogrenci1.isim,ogrenci1.soyIsim,ogrenci1.numara);
	
	
	
}
