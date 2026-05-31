#include <stdio.h>
int main() {
   int batterypercent;
   scanf("%d",&batterypercent);
    int battery_remaining=batterypercent;
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        int battery_drain;
        scanf("%d",&battery_drain);
        battery_remaining-=battery_drain;
    }
    printf("Remaining Battery: %d%%",battery_remaining);
    return 0;
}