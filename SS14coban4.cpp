#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    printf("nhap vao mot chuoi bat ki:\n");
    char str[50];
    fgets(str,sizeof(str),stdin);
    int length=strlen(str);
    for(int i=0; i<length;i++){
        if(str[i]>='0' && str[i]<='9'){
            printf("so dau tien trong chuoi la %c\n ",str[i]);
            break;
        }
    }
    return 0;
}


