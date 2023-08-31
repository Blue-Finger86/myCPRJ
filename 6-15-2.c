#include <stdio.h>

void main()
{
	int i, k = 1;

	for(i = k; k<10; i++) {
		printf("%d X %d = %2d\n", i, k, i*k);
	}
}

