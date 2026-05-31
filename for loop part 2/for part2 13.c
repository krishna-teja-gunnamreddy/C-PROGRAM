#include <stdio.h>
int main() {
    int logs;
    scanf("%d",&logs);
    int count=0,total=0;
    for (int i=0;i<logs;i++){
        int hour;
        scanf("%d",&hour);
        if(hour>50){
            count++;
        }
        total+=hour;
    }
    printf("Total Errors: %d\n\n",total);
    printf("Critical Hours: %d",count);
    return 0;
}