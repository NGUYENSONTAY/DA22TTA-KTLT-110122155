
#include <stdio.h>

int main() {
    int a, b;

    // Nhap hai so nguyen
    printf("Nhap so thu nhat: ");
    scanf("%d", &a);
    printf("Nhap so thu hai: ");
    scanf("%d", &b);

    // In ket qua
    printf("Tong: %d\n", a + b);
    printf("Hieu: %d\n", a - b);
    printf("Tich: %d\n", a * b);

    if (b != 0) {
        printf("Thuong: %.2f\n", (float)a / b);
    } else {
        printf("Khong the chia cho 0\n");
    }

    
    return 0;
}


