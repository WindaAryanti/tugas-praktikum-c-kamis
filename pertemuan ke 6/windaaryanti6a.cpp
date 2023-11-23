#include <stdio.h>
main ()
{
	int i, N=10;
	printf("Deret bilangan genap\n");
	for(i=1; i<=10; i++) {
		printf("%4i", N);
		N = N + 10;
	}
	
	return 0;
}
