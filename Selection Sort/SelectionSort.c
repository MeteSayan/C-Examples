#include<stdio.h>

#define MAX 50

void selectionsort(int arr[],int size){
	
	int i,j;
	int minindex;
	for (i=0; i < size;i++){
		minindex = i;
		for (j=i+1; j < size; j++){
			if(arr[j] < arr [minindex]){
				minindex = j;
			}
		}
		int temp = arr[i];
		arr[i] = arr[minindex];
		arr[minindex] = temp;
	}
	
	
}

int main(){
	
	int array[MAX],size,i;
	
	printf("How many numbers(Max. 50):");
	scanf("%d",&size);
	
	for (i = 0; i < size;i++){
		scanf("%d",&array[i]);	
	}
	
	selectionsort(array,size);
	
	for(i=0; i < size;i++){
		printf("%d ",array[i]);
	}	
	
	return 0;
}
