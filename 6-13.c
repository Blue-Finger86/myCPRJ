#include <stdio.h>

void main()
{
	int i, k;

	for(i=2; i<10; i++) {
	 for(k=1; k<10; k++) {
			printf("%d X %d = %d\n", i, k, i*k);
		}
		printf("\n");
	}
}

