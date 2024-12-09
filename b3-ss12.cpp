#include<stdio.h>

long long int tinh(int n){
	long long int giaithua=1;
	for(int i=1;i<=n;i++){
		giaithua*=i;
	}
	return giaithua;
} 
int main(){
	int n;
	printf("nhap so nguyen muon tinh giai thua: ");
	scanf("%d",&n);
	printf("ket qua cua bai toan la: %lld",tinh(n));
	return 0;
}
