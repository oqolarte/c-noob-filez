#include <stdio.h>

int main(void) {
        int goat_count;
        printf("Enter a goat count: ");
        scanf("%d", &goat_count);

        switch(goat_count) {
                case 0:
                        printf("You have no goats.\n");
                        break;
                case 1:
                        printf("You have a singular goat.\n");
                        break;
                default:
                        printf("You have a bona fide plethora of goats!\n");
                        break;
        }
}
