#include <stdio.h>
int main() {
    int remaining;
    scanf("%d",&remaining);
    int times;
        scanf("%d",&times);
    int count=0;
    for (int i=0;i<times;i++){
        int amount;
        scanf("%d",&amount);
        remaining-=amount;
        if(remaining<5000){
            count++;
        }
    }
    printf("Remaining Cash: %d\n\n",remaining);
    printf("Risk Count: %d",count);
    return 0;
}