#include <stdio.h>

// by using functions you can reduce code dupe
// guide : https://www.w3schools.com/c/c_functions.php
int getIntInput(char *message){
	int input;
	printf("%s", message);
	scanf("%d", &input);
	return input;
}

int main(){
	int one = getIntInput("Enter a Number : ");
	int two = getIntInput("Enter a another Number : ");
	printf("Sum : %d",one + two);
	return 0;
}