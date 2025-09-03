#include <stdio.h>

typedef enum Day {
  SUNDAY,
  MONDAY,
  TUESDAY,
  WEDNESDAY,
  THURSDAY,
  FRIDAY,
  SATURDAY
} day_t;

const char *get_day_name(day_t day) {
  switch (day) {
  case SUNDAY:
    return "Sunday";
  case MONDAY:
    return "Monday";
  case TUESDAY:
    return "Tuesday";
  case WEDNESDAY:
    return "Wednesday";
  case THURSDAY:
    return "Thursday";
  case FRIDAY:
    return "Friday";
  case SATURDAY:
    return "Saturday";
  default:
    return "Unknown";
  }
}

int main() {
  day_t today = WEDNESDAY;
  printf("Today is %s\n", get_day_name(today));
  return 0;
}