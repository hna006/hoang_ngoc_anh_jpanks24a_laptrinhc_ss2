#include <stdio.h>
#include <stdlib.h>
int main()
{
    printf("nhap vao mot chuoi bat ki:\n");
    char str[50];
    fgets(str,sizeof(str),stdin);
    fputs(str,stdout);
    return 0;
}
