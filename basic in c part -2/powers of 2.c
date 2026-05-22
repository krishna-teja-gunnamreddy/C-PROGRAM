#include <stdio.h>
int main() {
    int a,b;
    scanf("%d",&a);
    b=(a-1);
    if((a&b)==0){
        printf("POWER OF 2");
    }
    else{
        printf("no");
    }
    return 0;
}