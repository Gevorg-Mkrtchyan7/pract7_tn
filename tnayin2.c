# include <stdio.h>

int main()
{
	int a = 0;
	int num = 0;
	printf("Enter a number: ");
	scanf("%d", &num);

	for(int i = 0; i < num; i++){
		if(num % i == 0){
		a += i;
		}
	}
	if(num == a){
		printf("This number is perfect \n");
	} else {
		printf("This number isn't perfect \n");
	}
}
