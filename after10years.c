/* Age after 10 Years */

#include <time.h>
#include <stdio.h>

int main(int argc, char *argv[]) {
	int b_day, b_month, b_year, age;
	printf("Your birthday: ");
	scanf("%d.%d.%d", &b_day, &b_month, &b_year);
	
	time_t today = time(NULL); 
	struct tm *current_time;
	current_time = localtime(&today);
	
	int day = current_time->tm_mday;
	int month = current_time->tm_mon + 1;
	int year = current_time->tm_year + 1900;
	
	if (month == b_month) {
		if (day >= b_day) {
			age = year - b_year;
		} else {
			age = year - b_year -1;
		}
	} else if (month > b_month) {
		age = year - b_year;
	} else {
		age = year - b_year - 1;
	}

	printf("Now: %d\nAfter 10 years: %d\n", age, age+10);
	return 0;
}