/* accepts a date from user in mm/dd/yyyy format and then displays it
 * in yyyymmdd */

#include <stdio.h>

int main() {
        int month, day, year;
        printf("Enter a date (mm/dd/yyyy): ");
        scanf("%d/%d/%d", &month, &day, &year);
        
        char mm[2];
        char dd[2];
        char yyyy[4];

        sprintf(yyyy, "%d", year);
        printf("ISO format: %s", yyyy);

        sprintf(mm, "%d", month);
        if (month < 10) {
                printf("0%s", mm);
        } else {
                printf("%s", mm);
        }

        sprintf(dd, "%d", day);
        if (day < 10) {
                printf("0%s\n", dd);
        } else {
                printf("%s\n", dd);
        }

        return 0;
}
