/* Performs Collatz Conjecture */
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
        if (argc != 2) {
                printf("Usage: ./collatz INTEGER\n");
                return -1;
        }

        int n = atoi(argv[1]);
        if (n <= 1) {
                printf("Error: should be n > 1\n");
                return -1;
        }

        int steps = 0;
        while (n != 1) {
                if (n % 2 == 0) {n /= 2;} 
                else {n = n * 3 + 1;}
                steps++;
        }

        printf("As per Collatz Conjecture, %d steps are needed to get to n = 1.\n", steps);
        return 0;
}
