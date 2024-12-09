#include<stdio.h>
void mang( int a[], int n){
	for(int i=0;i<n;i++){
		printf("%d ",a[i]);
	}
}
int main(){
	int a[100], n;
	printf("nhap so phan tu muon nhap: ");
	scanf("%d",&n);
	for (int i=0; i<n; i++){
		printf("a[%d]= ", i);
		scanf("%d", &a[i]); 
	} printf("cac phan tu trong mang la: ");
	mang(a, n); 
	
	return 0; 
} 

