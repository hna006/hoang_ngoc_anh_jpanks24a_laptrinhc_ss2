#include <stdio.h>
int main(){
    int numbers[5];
    int soChan = 0, soLe = 0;

    printf("Nhap 5 so nguyen:\n");
    for (int i = 0; i < 5; i++){
        scanf("%d", &numbers[i]);
    }

    for (int i = 0; i < 5; i++){
        if (numbers[i] % 2 == 0){
            soChan++;
        } 
		else {
            soLe++;
        }
    }
    
    printf("So luong so chan: %d\n", soChan);
    printf("So luong so le: %d\n", soLe);

    return 0;
}

