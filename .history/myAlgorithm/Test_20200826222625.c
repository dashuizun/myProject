#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a, b, c, d, e;
    // scanf("%d", &a);
    // printf("��������ǣ�%d", a);
    a = 1; b = 1;
    c = a++;
    ++b;
    d = b;
    // c=1 d=2
    printf("%d,%d", c, d);
    
    return 0;
}
