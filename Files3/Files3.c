#include <stdio.h>

int main(){
	
	FILE *filep;
	char text[256];
	filep = fopen("yaz.txt","a");
	
	if(filep == NULL){
		printf("Dosya Olusmadi.");
	}
	else {
		
		printf("Bir sey yazin: \n");
		fgets(text,256,stdin);
		fputs(text,filep);
		printf("Dosyaya yazildi.\n");
		fclose(filep);
		
	}
	
	return 0;
	
}
