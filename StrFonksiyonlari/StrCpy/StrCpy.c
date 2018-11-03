#include <stdio.h>
#include <stdlib.h>

int main(){
	
	char kaynak[30] = "Merhaba Mugla";
	char kopya[30] = "";
	
	strcpy(kopya,kaynak);
	printf("%s",kopya);
	
	
	
	return 0;
}
