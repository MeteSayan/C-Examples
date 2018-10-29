#include<stdio.h>
#include<string.h>

int main(){
	
	char veri[35] = "C programlama dili ogreniyorum.";
	int uzunluk = strlen(veri);
	int i;
	
	FILE *filep = fopen("deneme.txt","w");
	
	if(filep == NULL){
		printf("Dosya olusturulamadi.\n");
	}
	else{
		
		for(i=0;i<uzunluk;i++){
			fputc(veri[i],filep);
			printf("Yazilan karakter %c\n",veri[i]);
		}
		
		printf("Dosya basari ile yazdirildi.\n");
		fclose(filep);
		
	}
	
}
