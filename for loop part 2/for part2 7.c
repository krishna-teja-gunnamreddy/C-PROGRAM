#include <stdio.h>
int main() {
    int rain_days;
    scanf("%d",&rain_days);
    int total_rainfall=0;
    int heavy_raindays=0;
    for(int i=0;i<rain_days;i++){
        int rainfall;
        scanf("%d",&rainfall);
        if(rainfall>50){
            heavy_raindays++;
        }
        total_rainfall+=rainfall;
    }
    printf("Total Rainfall: %d\n",total_rainfall);
    printf("\nHeavy rain Days: %d",heavy_raindays);
    return 0;
}