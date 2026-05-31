#include <stdio.h>
int main() {
    int days;
    scanf("%d",&days);
    int count=0,total=0;
    for (int i=0;i<days;i++){
        int list;
        scanf("%d",&list);
        if(list>100){
            count++;
        }
        total+=list;
    }
    printf("Total Patients: %d\n\n",total);
    printf("Overcrowded Days: %d",count);
    return 0;
}