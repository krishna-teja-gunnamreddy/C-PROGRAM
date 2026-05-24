#include <stdio.h>
int main() {
    int fuel;
    scanf("%d",&fuel);
    int trips;
    scanf("%d",&trips);
    int count=0,i=1,remaining=0;
    while(i<=trips){
        int fuel_consumption;
        scanf("%d",&fuel_consumption);
        if(fuel_consumption<=fuel){
            count++;
            fuel-=fuel_consumption;
        }
        i++;
    }
    printf("Completed Trips: %d\nRemaining Fuel: %d",count,(fuel-remaining));
    return 0;
}