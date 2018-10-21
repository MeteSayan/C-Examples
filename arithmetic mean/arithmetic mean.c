#include<stdio.h>

int main(){
	
	int a,b,c,d,e;
	
	float arith;
	
	printf("Enter 5 numbers:");
	scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
	arith = (a+b+c+d+e)/5.0;
	printf("The arithmetic mean of the numbers you entered: %.2f",arith);	

	
}
