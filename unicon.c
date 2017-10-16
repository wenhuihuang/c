#include <stdio.h>
#include <string.h>

union Data
{
    int i;
    float f;
    char str[20];
};

int main(){
    union Data data;
    data.i=10;
    printf("data.i : %d\n",data.i);
    data.f=200.3;
    printf("data.f : %d\n",data.f);
    strcpy(data.str,"这是c programming");
    printf("data.str : %d\n",data.str);
    return 0;
}