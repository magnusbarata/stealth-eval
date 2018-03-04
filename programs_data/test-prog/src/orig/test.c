/* test.c */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void succeeded()
{
    puts("auth succeeded!");
}

void failed()
{
    puts("auth failed.");
}

int main(int argc, char *argv[])
{
    char username[256];
    char password[256];
    char from[256];
    char number[256];
    int u,p,f,n;
    printf("Enter username: ");
    scanf("%s", username);
    printf("Enter password: ");
    scanf("%s", password);
    printf("Enter from: ");
    scanf("%s",from);
    printf("Enter number: ");
    scanf("%s",number);
    n = atoi(number);
    u = strcmp(username,"admin");
    p = strcmp(password,"letmein");
    f = strcmp(from,"Japan");


    if (u == 0 && p == 0 && f == 0 && n == 1234) {
        succeeded();
    } else {
        failed();
    }
    return 0;
}
