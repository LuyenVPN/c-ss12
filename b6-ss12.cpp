#include<stdio.h>
#include<math.h>
void so(int n);
int main(){
	int a,b;
	printf("nhap vao so nguyen thu nhat: ");
	scanf("%d",&a);
	printf("ket qua la: ");
	so(a);
	printf("nhap vao so nguyen thu hai: ");
	scanf("%d",&b);
	printf("ket qua la: ");	
	so(b);
	return 0;
}
void so(int n){
	int dem=0; 
		for(int i=1;i<=n/2;i++){
			if(n%i==0){
				dem+=i;
			}
		}
		if(dem==n&&dem!=0){
			printf("true\n");
		}else{
			printf("false\n");
		}
}
