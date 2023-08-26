#include <stdio.h>

typedef struct {
    char id[100];
    char name[100];
    int quantity;
    double price;
} Item;

int main (void){
	
	int i, no;
	FILE *cfPtr; //Create file pointer
	
	cfPtr = fopen("purchase.txt", "w"); //Create and open file for writing
	
	if ( cfPtr == NULL){
		
		printf("Fail to create file\n");
		return -1;
		
	}
	
	printf("=============================================\n");
	printf("Enter Purchase Details\n");
	printf("=============================================\n");
	
	Item newitem;
	int end = 0;
	do{
		printf("Enter Item ID: \n");
		scanf("%s", &newitem.id);
		fprintf(cfPtr, "%s\n", newitem.id);
		
		printf("Enter Item Name: \n");
		scanf("%s", &newitem.name);
		fprintf(cfPtr, "%s\n", newitem.name);
		
		printf("Enter Item Quantity: \n");
		scanf("%d", &newitem.quantity);
		fprintf(cfPtr, "%d\n", newitem.quantity);
		
		printf("Enter Item Price: \n");
		scanf("%lf", &newitem.price);
		fprintf(cfPtr, "%lf\n", newitem.price);
		
		printf("[1] add another item [x] finish adding items\n");
		scanf(" %c", &end);
		
	}while (end == '1');
	
	printf("\n\n");
	
	printf("=============================================\n");
	
	fclose(cfPtr);
	
	cfPtr = fopen("purchase.txt", "r"); //Open file for reading
	
	Item items[100]; // Assuming you have a maximum of 100 items
    int itemCount = 0;
    
    while (fscanf(cfPtr, "%s %s %d %lf", items[itemCount].id, items[itemCount].name, &items[itemCount].quantity, &items[itemCount].price) == 4) {
        itemCount++;
    }
	
	printf("Item\tQuantity\tUnit Price\tPrice(Rs)\n");
	double total = 0.0;
	for (int i = 0; i < itemCount; i++) {
		printf("%s\t%d\t\t%.2lf\t\t%.2lf\n", items[i].name, items[i].quantity, items[i].price, (items[i].price * items[i].quantity));
		total = total + (items[i].price * items[i].quantity);
    }
	
	fclose(cfPtr);
	
	printf("=============================================\n");
	printf("Total : %.2lf\n", total);
	printf("=============================================\n");
	
	return 0;
}