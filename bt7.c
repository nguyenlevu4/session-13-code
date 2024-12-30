#include <stdio.h>

void hjk(int a,int b, float matran[a][b]) {
	printf("nhap gia tri cho phan tu: \n");
	for(int i=0; i<a; i++) {
		for(int j=0; j<b; j++) {
			printf("phan tu arr[%d][%d]: \n",i + 1,j + 1);
			scanf("%f",&matran[i][j]);
		}
	}
}
void hjr(int a,int b, float matran[a][b]) {
	printf("ma tran  vua nhap la:\n");
	for(int i=0; i<a; i++) {
		for(int j=0; j<b; j++) {
			printf("%f",matran[i][j]);
		}
		printf("\n");
	}
}
int main() {
	int a, b;
	printf("nhap so cat cho ma tran: ");
	scanf("%d", &a);
	printf("Nhap so dong cho ma tran: ");
	scanf("%d", &b);
	float matran[a][b];
	hjk(a, b, matran);
	hjr(a, b, matran);

	return 0;
}