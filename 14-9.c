#include <stdio.h>

void main(int a, char* b[]) 
{
	char str[200];
	FILE *rfp, *wfp;

	if(a != 3){
	printf("매개변수를 3개 입력해야 합니다.");
	return;
	}

	rfp = fopen(b[1], "r");
	wfp = fopen(b[2], "w");

	for( ;; ) 
	{
		fgets(str, 199, rfp);
		

		if(feof(rfp)) 
			break;

		fputs(str, wfp);
	}

	fclose(rfp);
	fclose(wfp);
}
