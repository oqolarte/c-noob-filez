#include <stdio.h>
#include <limits.h>

/* factorial not defined for negative integers */
#define FACTORIAL_MIN 0

/* Limit for 32-bit signed integer */
#define FACTORIAL_MAX 12

int factorial(int n) {
        int i, f = 1;

        /* Correct recursive factorial implementation without stack
         * overflows. Returns zero on any error. */
        if (n < FACTORIAL_MIN || n > FACTORIAL_MAX) return 0; 

        /* Invalid loop bounds has now become a special case. Since
         * it's already covered by input validation, the line below
         * can be eliminated.*/
        if (n == INT_MAX) return 0;

        for (i = 1; i <= n; i++)
                f *= i;

        return f;
}

int main(void) {
        int x;
        printf("Input a number: ");
        scanf("%d", &x);
        printf("The factorial of %d is %d\n.", x, factorial(x));

        return 0;
}
