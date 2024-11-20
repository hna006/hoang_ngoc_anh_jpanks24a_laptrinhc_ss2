#include<stdio.h>
int main() {
    const float PI = 3.14; 
    int banKinh = 5;       
    printf("Gia tri ban kinh hinh tron = %d \n", banKinh);
    float chuVi = 2 * PI * banKinh;
    printf("Chu vi hinh tron = %.2f \n", chuVi);
    float dienTich = PI * banKinh * banKinh;
    printf("Dien tich hinh tron = %.2f \n", dienTich);
    return 0;

	}
