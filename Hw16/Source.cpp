#include<stdio.h>
int main()
{
	int i, j ,x , num;
	scanf_s("%d", &num);
	for (i = 1; i <=num; i++){
		for (j = num; j >= i; j--) {
			printf(" ");
		}
			
		for (x = 1; x <= i; x++){
			printf("*");
		}		
		printf("\n");
		}
	return 0;
}


