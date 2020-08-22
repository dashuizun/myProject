#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(){
int a = 10;;
int *b = &a;

printf("%d\n", a);
printf("%d\n", &a); 
printf("%d\n", b);
printf("%d\n", *b);
}
