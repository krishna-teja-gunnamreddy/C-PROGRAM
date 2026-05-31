#include <stdio.h>
int main() {
    int days;
        scanf("%d",&days);
    
    int count=0,total=0;
    for (int i=0;i<days;i++){
        int revenue;
        scanf("%d",&revenue);
        if(revenue>50000){
            count++;
        }
        total+=revenue;
    }
    printf("Total Revenue: %d\n\n",total);
    printf("Target Days: %d",count);
    return 0;
}