#include <stdio.h>

int factorial(int n) {
    if (n == 0) {
        return 1; 
    }else {
    	return n * factorial(n-1);
	}
}

int main() {
    int num, result;
    printf("Nhap mot so nguyen bat ky: ");
    scanf("%d", &num);
    result = factorial(num);
    printf("Ket qua gia thua cua %d la: %d",num,result);
    
    return 0;
}