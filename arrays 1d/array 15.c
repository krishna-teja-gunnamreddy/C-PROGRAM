#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int k=0,c[n];
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            c[k]=arr[i];
            k++;
        }
    }
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            c[k]=arr[i];
            k++;
        }
    }
    for(int i=0;i<n;i++){
        printf("%d  ",c[i]);
    }
    return 0;
}