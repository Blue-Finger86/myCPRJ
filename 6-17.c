#include <stdio.h>

void main()
{
	int i, j, k;

	for(k=2; k<10; k++) {
		printf(" #Á¦%d´Ü#    ", k);
	}
	printf("\n");
	printf("\n");

	for(i=1; i<10; i++) {
		for(j=2; j<10; j++) {
		      printf("%d X %d = %2d  ", j, i, j*i);
		}
		printf("\n");
	}
	
}
