#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int i=1,inactive=0,active=0;
    while(i<=n){
        int status;
        scanf("%d",&status);
        if(status==0){
           inactive++;
        }
        else{
            active++;
        }
        i++;
    }
    if(inactive>=active){
        printf("Inactive Weeks: %d\nRisk Status: High",inactive);
    }
    else{
         printf("Inactive Weeks: %d\nRisk Status: Low",inactive);
    }
    return 0;
}