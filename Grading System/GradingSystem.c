#include<stdio.h>
#include<conio.h>

int main(){
	
	int exam1,exam2,exam3;
	float average;
	
	printf("Please enter your first exam note:\n");
	scanf("%d",&exam1);
	printf("Please enter your second exam note:\n");
	scanf("%d",&exam2);
	printf("Please enter your third exam note:\n");
	scanf("%d",&exam3);
	
	average = ((exam1 + exam2 + exam3) / 3.0);
	
	if(average > 70){
		printf("You passed the course.");
	}
	
	else if(average > 50){
		printf("Resit examination.");
	}
	
	else{
		printf("You haven't passed the course.");
	}
	
	printf("%f",average);
	
	getch();
	
}
