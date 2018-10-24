#include<stdio.h>

int max(int *a,int uzunluk){
	
	int maks = a[0];
	
	int i;
	
	for(i = 1 ; i < uzunluk ; i++){
		if(a[i] > maks){
			maks = a[i];
		}
	}
	return maks;
}

int main(){
	
	int sayilar[5] = {8,4,34,52,111};	
	
	int maks = max(sayilar,5);
	
	printf("Sayilar dizisinin en buyuk elemani %d dir",maks);
	
	
	return 0;
}
