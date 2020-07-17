#include <stdio.h>

#define N 1000
int main(void){

    char str[1000];
    int a, b;

    fgets(str, sizeof(str), stdin);
    sscanf(str, "%d %d", &a, &b);
    // printf("%d %d\n", a, b);                        //checker

    int row[N], row_1[N], row_2[N];

    fgets(str, sizeof(str), stdin);
    sscanf(str, "%d %d", &row_1[0], &row_1[1]);

    fgets(str, sizeof(str), stdin);
    sscanf(str, "%d %d", &row_2[0], &row_2[1]);
    // printf("%d %d\n%d %d\n", row_1[0], row_1[1], row_2[0], row_2[1]);                        //checker

    int side_1 = row_1[1] - row_1[0];
    int side_2 = row_2[1] - row_2[0];
    // int ver_1 = row_2[0] - row_1[0];
    // int ver_2 = row_2[1] - row_1[1];
    // printf("%d %d %d %d\n", side_1, side_2, ver_1, ver_2);              //checker

    for(int i = 0; i < a; i++){
        int side = side_1 + (side_2 - side_1) * i;
        // printf("side値:%d\n", side);                                //checker
        row[0] = row_1[0] + (row_2[0] - row_1[0]) * i;

        for(int j = 0; j < b; j++){
            row[j] = row[0] + side * j;
            if(j < b - 1){
                printf("%d ", row[j]);
            } else {
                printf("%d", row[j]);
            }
        }
        printf("\n");

    }


    return 0;
}
