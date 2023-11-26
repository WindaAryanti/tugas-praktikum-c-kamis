#include <stdio.h>
main ()
{
	int i, N=1;
	printf("Deret bilangan\n");
	for(i=0; i<=10; i++) {
		printf("%4i", N);
		N = N * 2;
	}
	
	return 0;
}
