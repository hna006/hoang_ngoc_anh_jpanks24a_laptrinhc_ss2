#include <stdio.h>
int main(){
    int nam, thang;

    printf("Nhap nam: ");
    scanf("%d", &nam);
    printf("Nhap thang: ");
    scanf("%d", &thang);

    if (thang < 1 || thang > 12){
        printf("Thang khong hop le!\n");
    } 
    else{
    	printf("So ngay trong ");
	}

    int laNamNhuan = (nam % 4 == 0 && nam % 100 != 0) || (nam % 400 == 0);

    int soNgay;
    switch (thang){
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            soNgay = 31;
            break;
        case 4: case 6: case 9: case 11:
            soNgay = 30;
            break;
        case 2:
            soNgay = laNamNhuan ? 29 : 28;
            break;
    }

    printf("thang %d nam %d co %d ngay.\n", thang, nam, soNgay);

    return 0;
}

