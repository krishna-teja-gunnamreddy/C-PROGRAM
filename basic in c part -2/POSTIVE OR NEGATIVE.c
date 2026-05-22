#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    a>0?printf("POSTIVE"):a<0?printf("NEGATIVE"):printf("ZERO");
    return 0;
}