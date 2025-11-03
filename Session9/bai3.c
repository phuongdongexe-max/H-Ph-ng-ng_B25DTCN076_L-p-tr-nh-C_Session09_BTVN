#include <stdio.h>
int main (){
	int size, ar[1000], i;
	printf ("Nhap so luong phan tu trong mang: ");
	scanf  ("%d", &size);
	for (i = 0; i < size; i++){
		printf ("Nhap gia tri cua phan tu thu %d: ", i + 1);
		scanf  ("%d", &ar[i]);		
	}
	for (i = 0; i < size; i++){
		printf ("Phan tu thu %d la %d: \n", i + 1, ar[i]);
	}
	return 0;
}
