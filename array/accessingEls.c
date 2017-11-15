#include <stdio.h>

int main() {
	/*array of 10 elements*/
	int n[ 10 ];
	int i, j;

	/*initialize elements of array*/
	for (i = 0; i < 10; i++) {
		/* set element on location i to i + 100 */
		n[ i ] = i + 100;
	}

	/* output each array elemtn's value */
for (j = 0; j < 10; j++) {
	printf("Elemtt[%d] = %d", j, n[j]);
}

	return 0;
}
