/*
 * Problem 10. * Beer Time
 * A beer time is after 1:00 PM and before 3:00 AM.
 * Write a program that enters a time in format “hh:mm tt” 
 * (an hour in range [01...12], a minute in range [00...59]
 *  and AM / PM designator) and prints “beer time” or “non-beer time”
 *  according to the definition above or “invalid time” 
 * if the time cannot be parsed. Note that you may need to learn how to parse dates and times
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {

    printf("Please choose a time (hh:mm tt): ");
    char timeStr[9];
    fgets(timeStr, 9, stdin);

    struct tm tm;
    memset(&tm, 0, sizeof (struct tm));
    char *parsed = strptime(timeStr, "%OI:%M %p", &tm);

    if (!parsed) {
        printf("invalid time");
        return -1;
    }

    int isBeerTime = (tm.tm_hour >= 13 && tm.tm_hour <= 23)
            || (tm.tm_hour >= 0 && tm.tm_hour < 3);

    if (isBeerTime) {
        printf("beer time");
    } else {
        printf("non-beer time");
    }
    return (EXIT_SUCCESS);
}

