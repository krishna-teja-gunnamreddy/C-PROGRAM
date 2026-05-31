#include <stdio.h>
int main() {
    int delivery;
        scanf("%d",&delivery);
    
    int count=0,total=0;
    for (int i=0;i<delivery;i++){
        int delay_time;
        scanf("%d",&delay_time);
        if(delay_time>30){
            count++;
        }
        total+=delay_time;
    }
    printf("Total Delay: %d\n\n",total);
    printf("Delayed Deliveries: %d",count);
    return 0;
}