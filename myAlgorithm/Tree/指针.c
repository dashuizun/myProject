#include <stdio.h>
#include <stdlib.h>
 /*
int main ()
{
   int  var = 20;   // 实际变量的声明
   int  *ip;        // 指针变量的声明
   ip = &var;  // 在指针变量中存储 var 的地址
   printf("Address of var variable: %p\n", &var  );
   // 在指针变量中存储的地址
   printf("Address stored in ip variable: %p\n", ip );
   // 使用指针访问值
   printf("Value of *ip variable: %d\n", *ip );
   return 0;
}*/
/*
int main(void)
{
    // p 是函数指针 
    int (* p)(int, int) = & max; // &可以省略
    int a, b, c, d;
    printf("请输入三个数字:");
    scanf("%d %d %d", & a, & b, & c);
    // 与直接调用函数等价，d = max(max(a, b), c) 
    d = p(p(a, b), c); 
    printf("最大的数字是: %d\n", d);
    return 0;
}

int max(int x, int y) //求最大值
{
    return x > y ? x : y;
}
*/

//#include <stdlib.h>必要
// 回调函数
void populate_array(int *array, size_t arraySize, int (*getNextValue)(void))
{
    for (size_t i=0; i<arraySize; i++)
        array[i] = getNextValue();
}
 
// 获取随机值
int getNextRandomValue(void)
{
    return rand();
}
 
int main(void)
{
    int myarray[10];
    populate_array(myarray, 10, getNextRandomValue);
    for(int i = 0; i < 10; i++) {
        printf("%d ", myarray[i]);
    }
    printf("\n");
    return 0;
}