#include <stdio.h>

struct bs
{
    unsigned a:1;
    unsigned b:3;
    unsigned c:4;
}bit,*pbit;
int main()
{

    bit.a=1;
    printf("%d\n",bit.a);
    pbit=&bit;
    pbit->a=0;
    printf("%d\n",pbit->a);
    printf("%d\n",bit.a);
	return 0;
}
