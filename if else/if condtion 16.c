#include <stdio.h>
int main() {
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a==b&&a==c){
       printf("equilateral triangle"); 
    }
    else if(a==b||b==c){
        printf("iscolses triangle"); 
    }
    else{
        printf("scalane triangle");
    }
    return 0;
}