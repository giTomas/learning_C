#include <stdio.h>

char grade = 'B';

int main()
{
	switch(grade)
	{
		case 'A':
			printf("excellent.\n");
			break;
		case 'B':
		case 'C':
			printf("Well done.\n");
			break;
	case 'F':
			printf("Better try again.\n");
	default:
			printf("Invalid grade.\n");
	}

	printf("Your grade is %c\n", grade);

	return 0;
}
