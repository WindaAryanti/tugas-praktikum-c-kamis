#include <stdio.h>

int main(){
	int A[12] = {60,80,55,90,75,40,50,85,70,65,45,55};
	int B[12];
	int C[12];
	int sum = 0, count = 0;
	float average;
	
	//Menghitung nilai rata-rata mahasiswa dari array A 
	for (int i = 0; i<12; i++) {
		sum+=A[i];
		count++;
	}
	average = (float)sum/count;
	
	//Memindahkan nilai-nilai yang lebih besar atau lebih kecil dari rata-rata ke array B dan C
	int bIndex=0, cIndex =0;
	for (int i=0; i<12; i++){
		if(A[i]>average) {
			B[bIndex]=A[i];
			bIndex++;
		}else if (A[i]<average){
			C[cIndex] = A[i];
			cIndex++;
		}
	}
	
	//Menampilkan isi array A,B,C
	printf("Isi array A:\n");
	for (int i=0; i<12;i++){
		printf("%d ", A[i]);
	}

	printf("\nIsi array B:\n");
	for(int i=0; i<bIndex;i++){
		printf("%d ", B[i]);
	}
	
	printf("\nIsi array C:\n");
	for(int i=0; i<bIndex;i++){
		printf("%d ", C[i]);
	}
	
	printf("\n"); 
	return 0;
}
