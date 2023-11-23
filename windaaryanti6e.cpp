#include <stdio.h>

int main() {
	double saldo=1000000;//saldo awal
	double bunga=0.02;//bunga perbulan
	int bulan=10;//jumlah bulan
	
	int i;
	for(i=1;i<=bulan;i++){
		saldo+=saldo*bunga;//menambahkan bunga ke saldo
	}
	
	printf("jumlah uang setelah%d bulan adalah Rp.%.2f\n",bulan,saldo);
	
	return 0;
}
