#include<stdio.h>
#include<time.h>
#include<string.h>
int main(){
    time_t t = time(NULL);
    struct tm tm = *localtime(&t);
    char dateTime[1000];
    sprintf(dateTime, "now: %d-%02d-%02d %02d:%02d:%02d\n", tm.tm_year + 1900, tm.tm_mon + 1, tm.tm_mday, tm.tm_hour, tm.tm_min, tm.tm_sec);
    printf("%s", dateTime);
}

