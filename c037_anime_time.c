#include <stdio.h>
#include <stdlib.h>
int main(void){

    char str[1000];
    char date[10];
    char times[10];
    fgets(str, sizeof(str), stdin);
    sscanf(str, "%s %s", date, times);

    char days[10];
    char hours[10];

    for(int i = 0; i < 2; i++){
        days[i] = date[i+3];
        hours[i] = times[i];
    }
    days[2] = '\0';
    hours[2] = '\0';
    // printf("日:%s 時間:%s\n", days, hours);     //チェッカー

    int d = atoi(days);
    int h = atoi(hours);
    // printf("日:%d 時間:%d\n", d, h);            //チェッカー

    while(h >= 24){
        h -= 24;
        d++;
    }

    char days_after[10];

    char first_place[10];


    if(d < 10){
        sprintf(first_place, "%d", d);
        days_after[0] = '0';
        days_after[1] = first_place[0];
    } else {
        sprintf(days_after, "%d", d);
    }

    char hours_after[10];
    if(h < 10){
        sprintf(first_place, "%d", h);
        hours_after[0] = '0';
        hours_after[1] = first_place[0];
    } else {
        sprintf(hours_after, "%d", h);
    }

    // printf("日:%s 時間:%s\n", days_after, hours_after);            //チェッカー

    if(h != 0){
        for(int i = 0; i < 2; i++){
            date[i+3] = days_after[i];
            times[i] = hours_after[i];
        }
    } else {
        for(int i = 0; i < 2; i++){
            date[i+3] = days_after[i];
        }
        times[0] = '0';
        times[1] = '0';
    }


    printf("%s %s\n", date, times);


    return 0;
}
