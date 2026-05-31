#include <stdio.h>
int main() { 
    int ticket_count;
    int total_amount;
    scanf("%d",&ticket_count);
    for(int i=0;i<ticket_count;i++){
        int ticket_price;
        scanf("%d",&ticket_price);
        total_amount+=ticket_price;
    }
    printf("%d",total_amount);
    return 0;
}