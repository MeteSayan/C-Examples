/*

3*5 lik matris
Matris:

6 5 1 1 2
3 2 4 3 1
7 5 4 3 2

Sonuc:
16 12 9 7 5

Matrisler alt alta toplanacak

*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int matris[3][5];
	int toplam = 0;

	int i,j;
	
	printf("Matrisini olusturmak istediginiz degerleri giriniz:\n");
	
	for (i = 0 ; i < 3 ; i++){
		
		for(j = 0 ; j < 5 ; j++){
			scanf("%5d", &matris[i][j]);
			
		}
	
	}
	
	
	for (i = 0 ; i < 3 ; i++){
		
		for(j = 0 ; j < 5 ; j++){
			printf("%5d", matris[i][j]);
			
		}
		printf("\n");
	}
	
	for(j = 0 ; j < 5 ; j++){
		
		for(i = 0 ; i < 3 ; i++){
			
			toplam += matris[i][j];
			
		}
		
		printf("%5d",toplam);
		toplam = 0;	
	}
	
	system("pause");
	
}
