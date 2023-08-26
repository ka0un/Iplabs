#include <stdio.h>

int main(void){
	
	int count = 1;
	
	while(count <= 20){
		
		printf("%d\t", count); count+=2;
		
	}
	
	//i. What are the values taken by count variabe during the execution of the progarm
	// 1 3 5 7 9 11 13 15 17 19 21 (it will not print 21)
	
	//ii. How many times the while condition will be checked during the execution of program.
	// 12 (on 12th time condition will be false)

	return 0;
}