#include <stdio.h>
int main() {
    int a,b;
    char ch;
    scanf("%d%d",&a,&b);
    scanf(" %c",&ch);
   switch  (ch){
        case   '+' :
        printf("%d+%d=%d",a,b,a+b);
        break;
        case   '-' :
         printf("%d-%d=%d",a,b,a-b);
        break;
        case  '/':
         printf("%d/%d=%d",a,b,a/b);
        break;
        case  '*':
         printf("%d*%d=%d",a,b,a*b);
        break;
        case  '%':
         printf("%d%%d=%d",a,b,a%b);
        break;
        default:
        printf("please select opeartors");
    }
    return 0;
}