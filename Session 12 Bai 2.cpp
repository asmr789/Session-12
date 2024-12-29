#include <stdio.h>

void printfArray(int arr[],int n){
	for(int i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
}
int main(){
	int array[100],n;
	printf("Nhap kich thuoc cho mang: ");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		printf("Nhap array[%d]: ",i);
		scanf("%d",&array[i]);
	}
	printf("Cac phan tu trong mang la: \n");
	printfArray(array,n);
	
	return 0;
}