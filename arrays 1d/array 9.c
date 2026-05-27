#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int max=-1,k=0,c[n];
    c[k]=max;
    k++;
    for(int i=n-1;i>=0;i--){
        if(max<arr[i]){
            c[k]=arr[i];
            k++;
            max=arr[i];
        }
        else{
            c[k]=max;
            k++;
        }
    }
    for(int k=n-1;k>=0;k--){
        printf("%d  ",c[k]);
    }
    return 0;
}