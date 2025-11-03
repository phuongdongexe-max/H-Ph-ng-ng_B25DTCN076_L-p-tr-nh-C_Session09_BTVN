#include <stdio.h>
int main() {
    int n, arr[1000], i, j, sum_prime = 0, number_prime;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);
    if (n <= 0 || n > 1000) {
        printf("So phan tu khong hop le.\n");
        return 1;
    }
    for (i = 0; i < n; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("Cac so nguyen to trong mang la: ");
    for (i = 0; i < n; i++) {
        number_prime = 1;
        if (arr[i] < 2) {
            number_prime = 0;
        } else {
            for (j = 2; j * j <= arr[i]; j++) {
                if (arr[i] % j == 0) {
                    number_prime = 0;
                    break;
                }
            }
        }
        if (number_prime == 1) {
            printf("%d ", arr[i]);
            sum_prime += arr[i];
        }
    }
    printf("\n");
    printf("Tong cac so nguyen to = %d\n", sum_prime);
    return 0;
}
