#include <stdio.h>

int main()
{
    int a[70], i = 0, j;
    int p_count = 0;
    int m_count = 0;
    char y;
    printf("请输入任意个数，按回车键结束，统计求和\n");
    //读取键盘所有输入 如果不是回车健则继续
    do
    {
        scanf("%d", &a[i++]);
    } while ((y = getchar()) != '\n');

    //循环所有数字
    for (j = 0; j < i; j++)
    {
        if (a[j] < 0)
        {
            m_count += a[j];
        }
        if (a[j] > 0)
        {
            p_count += a[j];
        }
    }
    printf("负数的和为%d,正数的和为%d", m_count, p_count);
    return 0;
}