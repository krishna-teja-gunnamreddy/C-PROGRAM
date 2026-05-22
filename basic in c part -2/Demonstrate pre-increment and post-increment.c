#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    printf("pre:%d\n",++a);
    printf("post:%d",a++);
    return 0;
}