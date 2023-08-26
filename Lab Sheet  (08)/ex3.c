#include <stdio.h>

int getMax(double *arr, int isMax);

int main(){
	
	double data[11] = {0};
	
	for (int i = 1; i <= 12;i++){
		printf("Enter data for Month %d \n", i);
		scanf("%lf", &data[i-1]);
	}
	
	printf("Maximum Rainfall Month : %d \n", getMax(data, 1));
	printf("Minimum Rainfall Month : %d \n", getMax(data, 0));
	
	return 0;
}

int getMax(double *arr, int isMax){
	
	int maxMonth;
	
	if (isMax){
		
		double max = 0;
		
		for (int i = 0; i <= 11; i++){
			if(arr[i] > max){
				max = arr[i];
				maxMonth = i + 1;
			}
		}
	
	}else{
		
		double min = 10000000000;
		
		for (int i = 0; i <= 11; i++){
			if(arr[i] < min){
				min = arr[i];
				maxMonth = i + 1;
			}
		}
		
	}
	
	return maxMonth;
	
}

