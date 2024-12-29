#include<stdio.h>

int findmax(int arr[],int size){
	int max=arr[0];
	for(int i=0;i<size;i++){
		if(arr[i]>max){
			max=arr[i];
		}
	}
	return max;
}

int main(){
	int arr[]={1,2,3,4,5,6,7,8,9,10};
	int size=sizeof(arr)/sizeof(int);
	int max;
	max=findmax(arr,size);
	printf("So lon nhat trong mang: %d",max);
	
	return 0;
}
