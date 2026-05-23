#include <stdio.h>
int main() {
    int money;
    scanf("%d",&money);
    if(money%100==0){
        printf(" Valid Amount");
    }
    else{
        printf(" Invalid Amount");
    }
    return 0;
}