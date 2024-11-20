#include<stdio.h>

int main() {
    int number1 = 6;
    printf("Gia tri bien number1 = %d \n", number1);

    int number2 = 4;
    printf("Gia tri bien number2 = %d \n", number2);

    int tong = number1 + number2;
    printf("Tong gia tri cua number1 va number2 = %d \n", tong);

    int hieu = number1 - number2;
    printf("Hieu gia tri cua number1 va number2 = %d \n", hieu);

    int tich = number1 * number2;
    printf("Tich gia tri cua number1 va number2 = %d \n", tich);


    float thuong = (float)number1 / number2;
    printf("Thuong gia tri cua number1 va number2 = %.2f \n", thuong);

    return 0;
    
	}
