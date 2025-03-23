# include <stdio.h>

int main()
{
	
	int num = 0;
	printf("Enter the number: ");
	scanf("%d", &num);

	for(int i = 0; i < num; i++){
		for(int a = 0; a < num; a++){
			printf("* ");
		}
		printf("\n");
	}

	return 0;
}
