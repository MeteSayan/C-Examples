#include<stdio.h>
#include<math.h>
#include<conio.h>

int main(){
	
	int i;
	int firstnum = 1;
	int secondnum = 1;
	
	
	for(i=0;i < 12;i++){
		 
		int temp = secondnum;
		
		secondnum += firstnum;
		
		firstnum = temp;
		
		printf("%d\n",temp);
		
	}
	
	getch();
}
