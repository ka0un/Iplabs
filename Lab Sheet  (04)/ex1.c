#include <stdio.h>

double getDoubleInput(char *message){
	double input;
	printf("%s", message);
	scanf("%lf", &input);
	return input;
}

int main(){
	
	double angle1, angle2, angle3;
	
	angle1 = getDoubleInput("Enter the angle 1 : ");
	angle2 = getDoubleInput("Enter the angle 2 : ");
	angle3 = getDoubleInput("Enter the angle 3 : ");
	
	if ((angle1 + angle2 + angle3) == 180.0)
	printf("Trangle Can Be formed ! \n");
	else
	printf("Trangle Cannot Be formed ! \n");
	
	return 0;
	
}