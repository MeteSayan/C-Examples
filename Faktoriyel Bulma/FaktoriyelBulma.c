#include <stdio.h>
#include <conio.h>

int faktoriyel(int sayi){
	
	int fact = 1;
	
	for ( ; sayi > 0 ; sayi--){
		
		fact *= sayi;
		
	}
	
	return fact;
	
}


int main(){
	
	int n;
	
	printf("Faktoriyelini bulmak istediginiz sayiyi giriniz:");
	scanf("%d",&n);
		
	printf("Faktoriyel %d",faktoriyel(n));
	
	getch();
	
}
