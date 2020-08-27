#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a, b, c, d, e;
    // scanf("%d", &a);
    // printf("你输入的是：%d", a);
    a = 1; b = 1;
    c = a++;
    d = ++b;
    // a=2 b=2 c=1 d=2
    printf("%d,%d", c, d);
    // 所有为int型 3/5=0 3.8=3
    int x;
    while (x++ < 103)
    {
        printf("%4d\n", x)
    }
    
    return 0;
}
