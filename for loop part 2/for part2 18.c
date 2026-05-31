#include <stdio.h>
int main() {
    int days;
        scanf("%d",&days);
    
    int count=0,total=0;
    for (int i=0;i<days;i++){
        int hours;
        scanf("%d",&hours);
        if(hours>3){
            count++;
        }
        total+=hours;
    }
    printf("Total Overtime Hours: %d\n\nOvertime Cost: %d",total,(total*200));
    printf("\n\nHeavy Overtime Days: %d",count);
    return 0;
}