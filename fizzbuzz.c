#include <stdio.h>

#define FACTOR1 3
#define FACTOR2 5
#define RANGE 100

int main(void) {
    for (int i = 1; i <= RANGE ; i++) {
        if (i % FACTOR1 == 0 && i % FACTOR2 == 0){
            printf("Fizzbuzz!\n");
        } else if (i % FACTOR1 == 0) {
            printf("Fizz!\n");
        } else if (i % FACTOR2 == 0) {
            printf("Buzz!\n");
        } else {
            printf("%d\n", i);
        }
    }
    return 0;
}
