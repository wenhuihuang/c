#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;
    fp = fopen("a.txt","w");
    int i;
    for(i=0;i<=9;i++){
        fprintf(fp,"temp[%d]=0x%h\n",i);
    }
    fclose(fp);
    return 0;
}