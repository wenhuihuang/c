#include <stdio.h>

int main(int argc,char *argv[])
{
    int ch;
    FILE *in,*out; //定义in和out两个文件类型指针
    if(argc != 3){//判断命令行是否正确
        printf("输入错误！请按要求输入");
        return;
    }
    //按读方式打开由argv[1]指定的文件
    if((in=fopen(argv[1],"r")) == NULL){
        printf("%s不能打开\n",argv[1]);
        return;
    }
    if((out=fopen(argv[2],"w")) == NULL ){
        printf("%s文件打开失败",argv[2]);
        return;
    }

    
    ch=fgetc(in); //从in所指文件的当前指针位置读取一个字符
    while(ch != EOF){
        fputc(ch,out); //若不是结束符，将它写入out所指定的文件
        ch = fgetc(in); //继续从in所指文件中读取下一个字符
    } //完成将in所指文件的内容写入（复制）到out所指文件中

    fclose(in);//关闭in所指文件
    fclose(out);//关闭out所指文件
}