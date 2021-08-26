/* Performs Collatz Conjecture */
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
        if (argc != 2) {
                printf("Invalid number of arguments. Requires only one integer (n > 1) as argument.\n");
                return -1;
        }

        unsigned long n = atoi(argv[1]);
        if (n <= 1) {
                printf("Math error. Use n > 1.\n");
                return -1;
        }

        int steps = 0;
        while (n != 1) {
                if (n % 2 == 0) {n /= 2;} 
                else {n = n * 3 + 1;}
                steps++;
        }

        printf("Per Collatz Conjecture, %d steps to get to n = 1.\n", steps);
        return 0;
}

