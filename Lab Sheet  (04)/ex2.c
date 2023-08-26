#include <stdio.h>

double getDoubleInput(char *message){
	double input;
	printf("%s", message);
	scanf("%lf", &input);
	return input;
}

double calRectarea(double width, double length){
	return width * length;
}

double calTranarea(double base, double height){
	return base * height/2.0;
}

double calCirarea(double radius){
	const double pi = 22.0/7;
	return pi * radius * radius;
}

int main(){
	
	char input;
	double area;
	
 	printf("Enter the Shape \n");
	printf("[R] Rectangle [T] Trangle [C] Circle\n");
 
	input = getchar();
	int correctinput = 1;
		
	switch (input){
		case 'R':
			area = calRectarea(getDoubleInput("Enter Width : "), getDoubleInput("Enter length : "));
			break;
		case 'T':
			area = calTranarea(getDoubleInput("Enter base : "), getDoubleInput("Enter height : "));
			break;
		case 'C':
		    area = calCirarea(getDoubleInput("Enter Radius : "));	
			break;
		case 'r':
			area = calRectarea(getDoubleInput("Enter Width : "), getDoubleInput("Enter length : "));
			break;
		case 't':
			area = calTranarea(getDoubleInput("Enter base : "), getDoubleInput("Enter height : "));
			break;
		case 'c':
		    area = calCirarea(getDoubleInput("Enter Radius : "));	
			break;	
		default:
		    printf("Worng Input \n");
		    correctinput = 0;
			break;	
	}
	
	if (correctinput){
		printf("Area : %.2lf\n", area);
	}
	
	return 0;
}