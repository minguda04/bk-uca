#include <stdio.h>
int main() {
	int i, j, c;
	int n;
	scanf("%d", &n);
	
	for(i = 1; i <=n; i++)
	{
		for(j = 1; j <= n-i; j++){
			printf(" ");
		}	
		for(c = 1; c <= 2*i-1; c++){
			printf("*");
		}
		printf("\n");
	}	




	return 0;
}


