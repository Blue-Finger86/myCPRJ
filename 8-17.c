#include <stdio.h>

void main() {
	int gugudan[9][9];

	for(int i = 0; i < 9; i++) {
		for(int j = 0; j < 8; j++) {
			gugudan[i][j] = (j+2)*(i+1);
			printf("%dX%d=%2d  ", j+2, i+1, gugudan[i][j]);	
		}
			printf("\n");
		
	}
}
