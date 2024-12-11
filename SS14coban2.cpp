#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    printf("nhap vao mot chuoi bat ki:\n");
    char str[50];
    fgets(str,sizeof(str),stdin);
    int length=strlen(str);
    for(int i=0; i<length-1;i++){
        printf("%c ",str[i]);
    }
    return 0;
}
