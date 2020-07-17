#include <stdio.h>

#define N 10
int main(void){

    char str[1000];
    int num;
    int prices[N];
    int open_price = 0, closing_price = 0, high_price = 0, low_price = 1000000;

    fgets(str, sizeof(str), stdin);
    sscanf(str, "%d", &num);

    for(int i = 0; i < num; i++){
        fgets(str, sizeof(str), stdin);
        sscanf(str, "%d %d %d %d", &prices[0], &prices[1], &prices[2], &prices[3]);
        // printf("%d %d %d %d\n", prices[0], prices[1], prices[2], prices[3]);

        if(i == 0){
            open_price = prices[0];
        }

        if(i == num - 1){
            closing_price = prices[1];
        }

        if(high_price < prices[2]){
            high_price = prices[2];
        }

        if(low_price > prices[3]){
            low_price = prices[3];
        }

    }

    printf("%d %d %d %d\n", open_price, closing_price, high_price, low_price);

    return 0;
}
