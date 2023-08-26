//This program calculate discount and final payment of a customer
#include <stdio.h>
int main(void){
	double totalPay, finalPay, discount;
	
	printf("Enter total payment of a customer : ");
	scanf("%lf", &totalPay);
	
	discount = totalPay * (15.0 / 100); //discount is double so there shuld be double litteral in calculations
	finalPay = totalPay - discount; //discount substract from the payment
	
	printf("Discount : %.2f\n" , discount);
	printf("Final Payment : %.2f\n" , finalPay);
	
	return 0;
}
