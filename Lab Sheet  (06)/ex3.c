#include <stdio.h>

double circleArea(double radius);
double cirlclePeri(double radius);
double recArea(double width, double length);

int main(){
	
	double radius, height;
	
	printf("Enter the Radius : \n");
	scanf("%lf", &radius);
	printf("Enter the height : \n");
	scanf("%lf", &height);
	
	printf("Area Of Cylinder : %.2lf\n", ((2 * circleArea(radius)) + recArea(cirlclePeri(radius), height))); 
	return 0;
}

double circleArea(double radius){
	const double pi = 22.0/7;
	return pi * radius * radius;
}


double cirlclePeri(double radius){
	const double pi = 22.0/7;
	return pi * 2 * radius;
}

double recArea(double width, double length){
	return width * length;
}