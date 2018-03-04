#include <stdio.h>
#include <time.h>
#include <stdlib.h>

unsigned int ACTIVATION_CODE = 891022408;
struct tm EXPIRE_TIME = {0,0,0,10,9-1,2015-1900,0,0,0};

void renewlicense(void) {
  printf("Your license is renewed.\n");
}

void failed() {
	printf("Wrong code.\n");
}

int checklicense(void) {
  time_t current_time;
  char code[256];

  time(&current_time); /* set current time */
  if (current_time > mktime(&EXPIRE_TIME)) {
    printf("Your license is expired.\n");
    fflush(stdout);
    while(1) {
      printf("Enter activation code: ");
      fgets(code, sizeof(code), stdin);
      if(atoi(code) == ACTIVATION_CODE) {
        renewlicense();
        return 0;
      } else {
        failed();
      }
      fflush(stdout);
    }
  }
  return 0;
}

int main(void) {
  int result;
  result = checklicense();
  
  return result;
}

