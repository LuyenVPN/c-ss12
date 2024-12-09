#include<stdio.h>
#include<math.h>

long long int display(){
	int a,b;
	long long int tong; 
	printf("nhap so thu nhat: ");
	scanf("%d", &a);
	printf("nhap so thu hai: ");
	scanf("%d", &b); 
	tong= a+b; 
	return tong; 
} 

int main(){
	long long int tong; 
	tong= display();
	printf("Tong 2 so la %lld", tong); 
	return 0; 
} 
