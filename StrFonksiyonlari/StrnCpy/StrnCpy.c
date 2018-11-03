#include <stdio.h>
#include <stdlib.h>

int main(){
	
	char nereden[30] = "Merhaba Manisa";
	char nereye[30] = "";
	
	strncpy(nereye,nereden,10);
	printf("%s",nereye);
	
	
	
	return 0;
}
