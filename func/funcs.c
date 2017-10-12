#include <stdio.h>

/* function declaration */
int max(int, int);

int main()
{
	int a, b, ret;
	
	scanf("%d %d", &a, &b);
	ret = max(a, b);

	printf("Max value %d\n", ret);
}

/* function returning the max between numbers */
int max(int num1, int num2) {
	return  (num1 > num2) ? num1 : num2;
}
