#include <stdio.h>

int main() {
	int A[] = {12,8,17,5,15};
	int B[] = {5,11,7,25,9,12,14};
	int i;
	
	int C[12];
	int indexC = 0;
	
	//Menyalin nilai yang lebih besar dari 10 dari array A ke array C
	for (int i=0;i<5;++i){
		if(A[i]>10){
			C[indexC]=A[i];
			++indexC;
		}
	}
	
	//Menyalin nilai yang lebih besar dari 10 dari array B ke array c
	 for (  i = 7 - 1; i >= 0; i--) {
		if (B[i]>10){
			C[indexC]=B[i];
			++indexC;
		}
	}
	
	//Menampilkan isi array
	printf("B. C = [ ");
    for (  i = 0;i<indexC; i++) {
        printf("%d ", C[i]);
    }
    printf("]\n");

	return 0;

}
