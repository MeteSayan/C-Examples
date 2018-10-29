#include<stdio.h>

int main(){
	
	FILE *filep = fopen("deneme.txt","r");
	
	if(filep == NULL){
		printf("Oyle bir dosya yok.\n");
	
	}
	else {
		printf("Dosya var.\n");
	}
	
}
