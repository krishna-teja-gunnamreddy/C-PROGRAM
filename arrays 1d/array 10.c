#include <stdio.h>
int main() {
    int n,i;
    scanf("%d",&n);
    int a[n];
    for( i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int c[n],k=0,count=0;
   int last =a[n-1];
    for (int b=n-1;b>=0;b--){
        if(last<a[b]){
           c[k]=a[b];
            last=a[b];
            k++;
            count++;
        }
    }
    for(int k=count-1;k>=0;k--){
        printf("%d  ",c[k]);
    }printf("%d  ",a[n-1]);
    return 0;
}