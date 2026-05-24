#include <stdio.h>
int main() {
    int capacity,n;
    scanf("%d%d",&capacity,&n);
    int i=1,sum=0;
    while(i<=n){
        int patient ;
        scanf("%d",&patient);
        sum+=patient;
        i++;
    }
    if(sum>capacity){
        printf("Treated Patients: %d\nRejected Patients: %d",capacity,(sum-capacity));
    }
    else{
        printf("Treated Patients: %d\nRejected Patients: 0",sum);
    }
    return 0;
}