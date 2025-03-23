# include <stdio.h>

int main()
{
	int num = 0;
	printf("Enter the number: ");
	scanf("%d", &num);
	int a = 0;
	int b = 0; 

	for(int i = 1; i <= num; i++){
		b = i;
		while(b){
			a++;	
			printf("%d", a);
			b--;
		}
		printf("\n");
	}
}
