#include <stdio.h>
#include<limits.h>
int main() {
    int size;
    scanf("%d",&size);
    int arr[size];
    for (int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    int m=INT_MIN;
     for(int i=0;i<size;i++){
        int profit;
        for(int j=0;j<size;j++){
            profit=arr[i]-arr[j];
           if(profit!=0){
            if(m<profit){
                
            m=profit;
        }}
        }
        
    }
    printf("  %d",m);
    return 0;
}