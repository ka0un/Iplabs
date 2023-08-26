#include <stdio.h>

/*This is a sample C program to input integer numbers from the keyboard and
display until user inputs -1*/ 
int main(void){
	
	int number;
	
	printf("Enter number : "); 
1	scanf("%d",&number);
	
	while(number != -1){
		printf("%d\n", number);
		printf("Enter number : "); 
20		scanf("%d",&number);
	}
	
	// i. If user inputs -1 as the first user input, how many repetitions will be there ?
    // 0
    // ii. If user inputs -1 as the first user input, how many times the loop condition will be tested?
    // 1
	
	return 0;
}