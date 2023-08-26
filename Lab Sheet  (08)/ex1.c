#include <stdio.h>
int main(void){
	
	int numbers[5] = {0};
	int i;
	
	for(i = 0; i < 5; i++) {
		
		printf("Enter integer value : ");
		scanf("%d", &numbers[i]);
		
	}
	
	printf("\nArray Elements : ");
	
	for(i = 0; i < 5; i++){
		
		printf("%d\t", numbers[i]);
		
	}
	
	return 0;
}