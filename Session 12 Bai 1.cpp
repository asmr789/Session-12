#include<stdio.h>

int sum(int a,int b){
	return a +b;
}
int main(){
	int n1,n2,result;
	printf("Nhap a:");
	scanf("%d",&n1);
	printf("Nhap b:");
	scanf("%d",&n2);
	result = sum(n1, n2);
	printf("Tong cua %d va %d la: %d\n",n1,n2,result);
	
	return 0;
}