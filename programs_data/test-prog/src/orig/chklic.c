#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int ACTIVATION_CODE = 42;
struct tm EXPIRE_TIME = {0,0,0,10,9-1,2015-1900,0,0,0};

void renewlicense(void) {
    puts("Your license is renewed.");
}

int checklicense(void) {
  time_t current_time;
  int code;

  time(&current_time); /* set current time */
  if (current_time > mktime(&EXPIRE_TIME)) {
    printf("Your license is expired.\n");
    printf("Enter activation code: ");
    scanf("%d", &code);
    if(code == ACTIVATION_CODE) {
      renewlicense();
    } else {
      printf("Wrong code.\n");
      return -1;
    }
  }
  return 0;
}

int main(void) {
  checklicense();
  return 0;
}

