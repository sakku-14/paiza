//PAIZAでは正答表示されない

#include <stdio.h>
int main(void){

    char str[10000];
    int num, must_ave, times, from, to;
    double ave = 0;

    fgets(str, sizeof(str), stdin);
    sscanf(str, "%d %d", &num, &must_ave);

    int lights[num];
    fgets(str, sizeof(str), stdin);

    int x = 0;
    while(x < num){
        lights[x] = str[x * 2] - '0';
        // printf("%d ", lights[x]);               //checker
        x++;
    }
    // printf("\n");                               //checker

    fgets(str, sizeof(str), stdin);
    sscanf(str, "%d", &times);


    x = 0;
    while(x < times){
        fgets(str, sizeof(str), stdin);
        sscanf(str, "%d %d", &from, &to);

        int y = from;
        while(y - 1 < to){
            ave += lights[y - 1];
            y++;
        }
        ave = ave / (to - from + 1);
        // printf("ave: %f\n", ave);                    //checker

        if(ave < must_ave){
            y = from;
            while(y < to + 1){
                lights[y-1] += must_ave - ave + 1;
                y++;
            }
        }

        //checker 各回表示
        // int a = 0;
        // while(a < num){
        //     printf("%d ", lights[a]);

        //     a++;
        // }
        // printf("\n");

        ave = 0;
        x++;
    }

    int z = 0;
    while(z < num){
        if(z < num - 1){
            printf("%d ", lights[z]);
        } else {
            printf("%d", lights[z]);
        }
        z++;
    }


    return 0;
}
