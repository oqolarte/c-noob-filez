#include <stdio.h>

int main(void) {
        int age = 30;
        int *pAge = &age;

        printf("%d", *pAge);
        return 0;
}
