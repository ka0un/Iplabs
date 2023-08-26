/*This program calculates the overall score using given the points
earned for the exam and homework*/
#include <stdio.h>

int main(){
	
	int examScore, homeworkScore;
	float overallScore;
	
	printf("Please enter the points earned for the exam : ");
	scanf("%d", &examScore);
	
	printf("Please enter the points earned for homework: ");
	scanf("%d", &homeworkScore);
	
	overallScore = (examScore + homeworkScore)/2.0;
	
	printf( "Overall course score is %.2f", overallScore );
	
	return 0;
}