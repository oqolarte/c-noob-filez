/* Find first 8 happy numbers. Compile with -lm. */
/* currently incomplete - 2021-02-22 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int n, digit, sum;
int sumOfSquaresOfDigits (int n) {
        while (n) {
                digit = n % 10;
                sum += pow(digit, 2); 
                n /= 10;
        }
        return sum;
}

int main () {
        int i, n = 1;

        while (i < 9) {
                if (sumOfSquaresOfDigits(n) == 1) {
                        printf("%d\n", sumOfSquaresOfDigits);
                        i++;
                }
                n++;
        }
        return 0;
}
