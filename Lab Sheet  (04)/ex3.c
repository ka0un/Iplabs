#include <stdio.h>

int getIntinput(char *message){
	int input;
	printf("%s", message);
	scanf("%d", &input);
	return input;
}

int main(){
	
	printf("======================\n");
	printf("Adventure resort\n");
	printf("======================\n");
	printf("Available Packages\n");
	printf("[1] Horse ride 2000/=\n[2] Scuba Diving 5000/=\n[3] Water Rafting 7000/=\n");
	printf("======================\n");
	int package = getIntinput("Enter the package you want [1] [2] or [3]: \n");
	int amount = getIntinput("Enter the number of people : \n");
	
	switch (package){
		case 1:
			printf("Cost : %d\n", 2000 * amount);
			break;
		case 2:
			printf("Cost : %d\n", 5000 * amount);
			break;
		case 3:
			printf("Cost : %d\n", 7000 * amount);
			break;	
		default:
			printf("wrong package number !\n");
			break;				
	}
	
	printf("======================\n");
	
	
	return 0;
}