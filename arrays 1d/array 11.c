#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int arr[n],total=0,right_sum=0,left_sum=0;
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        total+=arr[i];
    }
    for(int i=0;i<n;i++){
        right_sum=total-left_sum-arr[i];
        if(right_sum==left_sum){
            printf("%d",i);
            return 0;
        }
        left_sum+=arr[i];
    }
    printf("-1");
    return 0;
}