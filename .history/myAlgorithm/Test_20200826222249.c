#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a, b, c;
    // scanf("%d", &a);
    // printf("��������ǣ�%d", a);
    a = 1; b = 1;
    a++;
    c = ++b;
    printf("%d,%d", a, c);
    
    return 0;
}
