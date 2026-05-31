#include <stdio.h>
int main() {
    int days;
    scanf("%d",&days);
    int count=0,total=0;
    for (int i=0;i<days;i++){
        int price;
        scanf("%d",&price);
        if(price>count){
            count=price;
        }
        if(price>100){
            total++;
        }
    }
    printf("Highest price: %d\n\n",count);
    printf("High Price Days: %d",total);
    return 0;
}