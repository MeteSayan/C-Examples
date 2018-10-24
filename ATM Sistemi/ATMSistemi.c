#include<stdio.h>

int main(){
	
	int islem;
	int bakiye = 1000;
	int tutar;
	
	printf("Islemler\n1:Para yatirma\n2:Para cekme\n3:Bakiye sorgulama\n4:Kart iade\n");
	
	printf("Bakiyeniz: %d TL\n\n",bakiye);
	
	printf("Islem seciniz\n");
	scanf("%d",&islem);
	
	switch(islem){
		
		case 1:
			printf("Yatirmak istediginiz tutari giriniz.\n");
			scanf("%d",&tutar);
			bakiye = tutar + bakiye;
			printf("Isleminiz tamamlanmistir. Bakiyeniz : %d ", bakiye);
			
			break;
		case 2:
			
			printf("Cekmek istediginiz tutari giriniz.\n");
			scanf("%d",&tutar);
			if(tutar > bakiye){
				printf("Hesaptakinden daha fazla para cekemezsiniz.\n");
			}
			else{
				printf("Hesabinizdan %d TL cekilmistir. Iyi gunlerde kullanin\n", tutar);
				bakiye = bakiye - tutar;
				printf("Yeni bakiyeniz : %d TL", bakiye);
			}
			
			break;
		case 3:
			
			printf("Bakiyeniz : %d TL", bakiye);
		
			break;
		case 4:
			
			printf("Lutfen kartinizi aliniz, iyi gunler.");
	
			break;
	}
	
	
}
