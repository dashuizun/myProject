#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a, b, c, d;
    // scanf("%d", &a);
    // printf("ÄãÊäÈëµÄÊÇ£º%d", a);
    a = 1; b = 1;
    c = a++;
    d = ++b;
    // c=1 d=2
    printf("%d,%d", c, d);
    
    return 0;
}
