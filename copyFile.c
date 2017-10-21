#include <stdio.h>

int main(int argc, char * argv[])
{
    char ch;
    FILE *in,*out;
    if(argc != 3){
        printf("输入错误！请按要求输入");
        return;
    }
    if((in = fopen(argv[1],"r")) == NULL ){
        printf("%s文件不能打开！\n",argv[1]);
        return;
    }
    if((out=fopen(argv[2],"w")) == NULL ){
        printf("%s文件不能打开！\n",argv[2]);
        return;
    }
    ch = fgetc(in); //从in所指文件的当前指针位置读取一个字符
    while( ch != EOF){
        fputc(ch,out);
        ch = fgetc(in);
    }
    fclose(in);
    fclose(out);
}