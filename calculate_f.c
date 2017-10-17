#include <stdio.h>
#include <math.h>
/**
 * 
 * */

float calculate(float x, int n); //申明 计算总体

float pow_a( float x,int n); //计算次方

void main()
{
    printf("请输入合法的数字,以空格分割");
    float x;
    int n;
    /**
     * scanf() 以空格分割的 如果要自定义的用getchar() 
     * */
    scanf("%f%d",&x,&n);
    calculate(x, n);
}

float calculate(float x, int n) //定义
{
    float result;
    int i,x_result,n_result;
    for (i = 1; i <= n; i++)
    {
        
        x_result = pow_a(x,i);
        n_result=i;
        //计算每次的结果
        result += x_result/n_result;
    }
    //保留两位小数 %.2f
    printf("\n%.2f\n", result);
}

float pow_a(float x,int n){
    int i;
    float rs=x;
    for(i=1;i<n;i++){
        rs *= x;
    }
    printf("次方和=%f",rs);
    return rs;
}
