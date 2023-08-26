//This program calculate discount and final payment of a customer
#include <stdio.h>
int main(void){
	
	float r, h, areaRec, areaCircle, area;
	const float pi = 22.0/7; //creating pi constant seperately for simplify the statemsnts

	printf("Enter radius of the Cylinder : ");
	scanf("%f", &r);
	printf("Enter height of the Cylinder : ");
	scanf("%f", &h);

	areaRec = 2 * pi * r * h;
	areaCircle = pi * r * r;

	area = areaRec + areaCircle + areaCircle; //Cylinder has 2 circle areas 
 	printf("Surface area of cylinder : %.1f\n", area);

	return 0;
	
}
