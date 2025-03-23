# include <stdio.h>

int main()
{
	int num = 0;
	printf("Enter the number: ");
	scanf("%d", &num);
	int num1 = num - 2;
	int num2 = num - 2;
	int num3 = num * 2 - 1;
	int num4 = num - 1;
	int a = 1;

	while(num4){
		printf(" ");
		num4--;
	}			// es cikly patasxanatu e skzbi astxanishi hamar
	printf("*");
	printf("\n");


	for(int i = 0; i < num1; ++i){
		for(int j = 0; j < num2; j += 1){
			printf(" ");
		}		// es cikly patasxanatu e mejtexi arajin astxanishneric araj prabelneri hamar 
		printf("*");
		for(int k = 0; k < a; ++k){
			printf(" ");
		}		// es cikly patasxanatu e erankyan meji prabelneri hamar
		printf("*");
		
		num2--;
		a += 2;
		printf("\n");
	}			// es cikly patasxanatu e mejtexi toxeri hamar


	while(num3){
		printf("*");
		num3--;
	}			// es cikly patasxanatu e verji astxanishneri hamar
	printf("\n");

	return 0;
}
