#include <stdio.h>
int main() {
     char a;
    scanf("%c",&a);
    if((a>=65&&a<=76)||(a>=97&&a<=122)){
        printf("Alphabet");
    }
    else if(a>47&&a<57){
      printf("digit");
    }
    else{
        printf("Special Character");
    }
    return 0;
}