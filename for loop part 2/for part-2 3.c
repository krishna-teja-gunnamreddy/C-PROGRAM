#include <stdio.h>
int main() {
   int days;
    scanf("%d",&days);
    int total_units=0;
    for(int i=0;i<days;i++){
        int units;
        scanf("%d",&units);
        total_units+=units;
    } 
    printf("total units: %d",total_units);
    return 0;
}