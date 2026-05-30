#include <stdio.h>
int main() {
    int a;
    int r;
    int power=1;
    scanf("%d",&a);
   scanf("%d",&r);
    for (int i=1;i<=r;i++){
        power=power*a;
    }
   printf("%d",power);
    return 0;
}