#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void){
    int type, num, price[50], stock[50], number[50], i = 0, j = 0, k = 0, count = 0, total = 0;
    char x[10], act[10];

    scanf("%d%d", &type, &num);

    while(i < type){
        scanf("%d%d", &price[i], &stock[i]);
        // printf("%d %d\n", price[i], stock[i]);               //checker
        i++;
    }
    i = 0;

    while(i < num){
        while(j < type + 1){
            scanf("%s", x);
            if(j == 0){
                strcpy(act, x);
            } else {
                number[j - 1] = atoi(x);
            }
            while(x[k] != '\0'){
                x[k] = '\0';
                k++;
            }
            k = 0;
            j++;
        }
        j = 0;
        // printf("%s %d %d\n", act, number[0], number[1]);            //checker

        if(strcmp(act, "buy") == 0){
            while(j < type){
                if(stock[j] >= number[j]){
                    count++;
                }
                j++;
            }
            j = 0;
            // printf("%d\n", count);              //checker
            if(count == type){
                // printf("通過\n");               //checker
                while(j < type){
                    stock[j] -= number[j];
                    total += number[j] * price[j];
                    j++;
                }
                j = 0;
                printf("%d\n", total);
            } else {
                printf("-1\n");
            }
            total = 0;
            count = 0;
        } else {
            while(j < type){
                stock[j] += number[j];
                j++;
            }
            j = 0;
        }
        // printf("在庫数:%d %d\n", stock[0], stock[1]);           //checker
        i++;
    }
    i = 0;


    return 0;
}
