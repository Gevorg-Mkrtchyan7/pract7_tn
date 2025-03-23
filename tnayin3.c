# include <stdio.h>

int main()
{
	int num = 0;
	printf("Enter the number: ");
	scanf("%d", &num);

	for(int i = 1; i <= num; i++){
		int a = i;
		while(a){
			printf("%d", i);
			a--;
		}
		printf("\n");
	}

	return 0;
}
