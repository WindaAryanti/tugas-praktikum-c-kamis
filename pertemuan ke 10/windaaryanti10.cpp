#include <stdio.h>
int main() {
	int A[5] = {12,8,17,5,15};
	int B[7] = {5,11,7,25,9,12,14};
	int C[12] = {0};
	int I, J;
//cetak isi array A
	printf("Isi Array A : ");
	for (I=0; I<5; I++) {
		printf("%3i", A[I]);
	}
//cetak isi array B
	printf("\nIsi Array B : ");
	for (I=0; I<7; I++) {
		printf("%3i", B[I]);
	}
	J = 0; //index ini untuk array C
	for(I=0; I<5; I++) {
		C[J] = A[I];
		J++;
	}
	for(I=0; I<7; I++) {
		C[J] = B[I];
		J++;
	}
//cetak isi array C
	printf("\nIsi Array C : ");
	for (I=0; I<12; I++) {
		printf("%3i", C[I]);
	}
	return 0;
}
