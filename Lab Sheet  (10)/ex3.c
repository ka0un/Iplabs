#include <stdio.h>

// instructions doesnt make sence so i created this

typedef struct {
    char type;
    double amount;
} tInfo;

typedef struct {
    int number;
    int nic;
    char name[100];
    double balance;
} account;

void createAccount();
account* loadAccounts();
double getBalance(account newacc);

int main (void){
	
	createAccount();
	
	int acnum;
	printf("\nEnter Account Number to check the balance\n");
	scanf("%d", &acnum);
	printf("\nloading balance\n");
	
	account *accounts = loadAccounts();
	
	if(acnum == accounts[0].number){
		printf("\n=============================================\n");
		printf("Balance : %.2lf\n", getBalance(accounts[0]));
		printf("=============================================\n");
	}else{
		printf("Account not found!");
	}
	
	return 0;
}

void createAccount(){
	
	FILE *cfPtr; //Create file pointer
	
	cfPtr = fopen("account.txt", "w"); //Create and open file for writing
	
	if ( cfPtr == NULL){
		printf("Fail to create file\n");
	}
	
	printf("=============================================\n");
	printf("Enter Initial Account Details\n");
	printf("=============================================\n");
	
	account newacc;
	
	printf("Enter Account Number: \n");
	scanf("%d", &newacc.number);
	fprintf(cfPtr, "%d\n", newacc.number);
		
	printf("Enter Your Name: \n");
	scanf("%s", &newacc.name);
	fprintf(cfPtr, "%s\n", newacc.name);
		
	printf("Enter NIC: \n");
	scanf("%d", &newacc.nic);
	fprintf(cfPtr, "%d\n", newacc.nic);
	
	printf("=============================================\n");
	printf("Initial Account Details has been saved\n");
	printf("=============================================\n");
	
	fclose(cfPtr);
	
}

account* loadAccounts() {
    FILE *cfPtr;
    cfPtr = fopen("account.txt", "r");
    if (cfPtr == NULL) {
        printf("Failed to open file\n");
        return NULL;
    }
    
    account *accounts = malloc(100 * sizeof(account)); // Allocate memory dynamically this is required 
    if (accounts == NULL) {
        printf("Memory allocation failed\n");
        fclose(cfPtr);
        return NULL;
    }
    
    int count = 0;
    while (fscanf(cfPtr, "%d %d %49s %lf", &accounts[count].number, &accounts[count].nic, accounts[count].name, &accounts[count].balance) == 4) {
        count++;
    }
    
    fclose(cfPtr);
    
    return accounts;
}



double getBalance(account newacc) {
    FILE *cfPtr;
    cfPtr = fopen("transaction.txt", "r");
    if (cfPtr == NULL) {
        printf("Failed to open file\n");
        return -1.0; // Use a different approach to indicate errors
    }

    tInfo transactions[100];
    int transactionCount = 0;

    while (fscanf(cfPtr, " %c %lf", &transactions[transactionCount].type, &transactions[transactionCount].amount) == 2) {
        transactionCount++;
    }

    double balance = newacc.balance;
    for (int i = 0; i < transactionCount; i++) {
        if (transactions[i].type == 'D') {
            balance = balance + transactions[i].amount;
        } else if (transactions[i].type == 'W') {
            balance = balance - transactions[i].amount;
        } else {
            printf("Issue Detected with Transactions file\n");
            fclose(cfPtr);
            return -1.0; // Use a different approach to indicate errors
        }
    }

    fclose(cfPtr);

    return balance;
}