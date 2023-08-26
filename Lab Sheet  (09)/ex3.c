#include <stdio.h>

int main(void){
	
	int mark[3][3] = {0};
	int i, j, sid, score;

	for(i = 0; i < 3; i++){
		printf("Marks of Student No %d\n", i + 1);
		for(j = 0; j < 3; j++){
			printf("Enter marks for module %d : ", j + 1);
			scanf("%d", &mark[i][j]);
		}
		printf("\n");
	}
	
	printf("Student No     Exam Score     Average\n\n");
	
	for(i = 0; i < 3; i++){
		double total = 0.0;
		printf("   %d  \t\t",i+1);
		for(j = 0; j < 3; j++){
			printf("%d ",mark[i][j]);
			total = total + mark[i][j];
		}
		printf("\t%.2lf\n",total/3.0);
	}
	
	return 0;
}
