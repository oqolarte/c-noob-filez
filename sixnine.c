#include <stdlib.h>
#include <stdio.h>
 
int main(){
    int number;
    while(1){
        printf("enter a number: ");
        scanf("%d", &number);
        if(number != 69){
            printf("no, try a different number.\n");
        } else {
            break;
        }
    }
    printf( "↑↘    ↑ ↓   ←←←← ↓→→→→\n"
            "↑ ↘   ↑ ↓  ↙     ↓     \n"
            "↑  ↘  ↑ ↓ ↓      ↓→→→→ \n"
            "↑   ↘ ↑ ↓  ↘     ↓      \n"
            "↑    ↘↑ ↓   →→→→ ↓→→→→  \n"
              "\n");
    return 0;
}
