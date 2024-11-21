#include <stdio.h>
#include <stdlib.h>
int main()
{
    printf("hoang_ngoc_anh_ss3coban4\n");
    printf("diem trung binh\n");
    float toan,van,anh,diemTB;
    printf("diem toan:");
    scanf("%f",&toan);
    printf("diem van:");
    scanf("%f",&van);
    printf("diem anh:");
    scanf("%f",&anh);
    diemTB=(toan+van+anh)/3;
    printf("diem trung binh vua ban la: %.2f\n",diemTB);
    return 0;
}
