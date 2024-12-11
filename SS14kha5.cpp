#include <stdio.h>
#include <stdlib.h>
int main()
{
    int dem=0;
    printf("nhap vao mot chuoi bat ki:\n");
    char str[50];
    fgets(str,sizeof(str),stdin);
    int length=strlen(str);
    for(int i=0; i<length;i++){
        if(str[i]==' '){
            dem++;
        }
    }
    dem++;
    printf("%d\n",dem);
    printf("Hello world!\n");
    return 0;
}
