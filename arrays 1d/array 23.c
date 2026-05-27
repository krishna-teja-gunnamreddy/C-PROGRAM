#include <stdio.h>
#include<limits.h>
int main() {
    int n;
    int k=INT_MIN;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int m=INT_MAX;
    for(int i=0;i<n;i++){
        if(arr[i]>0){
            if(arr[i]<m){
                m=arr[i];
            }
        }
        else{
            if(arr[i]>k){
                k=arr[i];
            }
        }
    }
    int l=0-(k);
    if(l<m){
        printf("   %d",k);
    }
    else{
        printf("    %d",m);
    }
    return 0;
}