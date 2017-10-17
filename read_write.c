#include <stdio.h>
/**
 * 读入一串字符,以#号结束,并把字符写入文件中
 * */
void main()
{
    //读取字符
    char str[100],i;
    for(i=0;i<100;i++){
        str[i]=getchar();
        //#号结束
        if(str[i] == '#'){
            str[i]='\0';
            break;
        }
    }
    //printf("%s\n",str);
    //写入文件
    FILE *fp;
    fp = fopen("b.txt","w");
    fprintf(fp,"%s",str);
    fclose(fp);
}