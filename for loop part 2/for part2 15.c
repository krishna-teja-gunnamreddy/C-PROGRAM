#include <stdio.h>
#include<limits.h>
int main() {
    int days;
        scanf("%d",&days);
    
    int count=0,total=INT_MAX;
    for (int i=0;i<days;i++){
        int voltage;
        scanf("%d",&voltage);

        if(voltage<210){
            count++;
        }
        if(voltage<total){
            total=voltage;
        }
    }
    printf("Minimum Voltage: %d\n\n",total);
    printf("Low Voltage Events: %d",count);
    return 0;
}