#include <stdio.h>

int main() {

int n;

printf("Input N = ");
scanf("%d", &n);

if (n > 50){
	n = n - 25;
}
	n = n + 10;
printf("hasil akhir : %d\n", n);


return 0;
}
