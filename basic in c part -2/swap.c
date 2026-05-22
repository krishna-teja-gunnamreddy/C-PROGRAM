#include <stdio.h>
int main() {
    int a,b;
    scanf("%d%d",&a,&b);
    a=a+b;
    b=a-b;
    printf("after swap b=%d\n",b);
    a=a-b;
    printf("after swap a=%d",a);
    return 0;
}