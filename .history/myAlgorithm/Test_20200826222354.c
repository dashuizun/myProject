#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a, b, c, d;
    // scanf("%d", &a);
    // printf("��������ǣ�%d", a);
    a = 1; b = 1;
    c = a++;
    d = ++b;
    printf("%d,%d", c, d);
    
    return 0;
}
