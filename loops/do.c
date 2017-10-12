#include <stdio.h>

int main()

{
	int a = 0;
	do {
		a -= 1;
		printf("a = %d\n", a);
	}
	while (a > 0);

	return 0;
}
