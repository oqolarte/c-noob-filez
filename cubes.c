/* Prints out cube of a given number */

#include <stdio.h>
#include <stdlib.h>

double cube(double num) {
        return num * num * num;
}

int main (int argc, char *argv[]) {
        if (argc != 2) {
                printf("usage: ./cubes NUMBER\n");
                return 1;
        }

        /* converts argument to a double */
        double nnn = atof(argv[1]);
        printf("Answer: %f\n", cube(nnn));
        return 0;
}
