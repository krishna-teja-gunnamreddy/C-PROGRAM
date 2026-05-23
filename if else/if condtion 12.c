#include <stdio.h>
int main() {
    char a;
    scanf("%c",&a);
    if(a>=65&&a<91){
        printf("Uppercase letter");
    }    
    else if(a>=97&&a<122){
        printf("Lowercase letter");
    }
    else {
        printf("Not a alphabet");}
            return 0;
}