#include <stdio.h>
int main() {
    int water_level;
    scanf("%d",&water_level);
    if( water_level>90&&water_level<=100){
        printf(" Overflow Warning");             
    }
    else if(water_level<90&&water_level>0) {
        printf("Safe Level");
    }
    else {
        printf("Invalid");
    }
    return 0;
}