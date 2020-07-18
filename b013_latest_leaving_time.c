#include <stdio.h>
int main(void){

    char str[1000];
    int a, b, c;
    fgets(str, sizeof(str), stdin);
    sscanf(str, "%d %d %d", &a, &b, &c);
    int x = b + c;
    int z = a + b + c;

    int num;
    fgets(str, sizeof(str), stdin);
    sscanf(str, "%d", &num);


    int result[num];                        //st1から会社までの時間（分表記）
    int timefromst1 = 0;
    for(int i = 0; i < num; i++){
        int hour, min;
        fgets(str, sizeof(str), stdin);
        sscanf(str, "%d %d", &hour, &min);
        // printf("%d %d\n", hour, min);               //checker

        result[i] = hour * 60 + min + x;
        // printf("%d\n", result[i]);                      //checker
        if(result[i] <= 8 * 60 + 59){
            if(timefromst1 <= result[i]){                   //「st1から会社まで」
                timefromst1 = result[i];
            }
        }

    }

    int totalTime = timefromst1;
    int leavingTime = totalTime - z;
    int ansHour = leavingTime / 60;
    int ansMin = leavingTime % 60;

    if(ansHour < 10 && ansMin < 10){
        printf("0%d:0%d\n", ansHour, ansMin);
    } else if(ansHour < 10 && ansMin >= 10){
        printf("0%d:%d\n", ansHour, ansMin);
    } else if(ansHour >= 10 && ansMin < 10){
        printf("%d:0%d\n", ansHour, ansMin);
    } else {
        printf("%d:%d", ansHour, ansMin);
    }

    return 0;
}
