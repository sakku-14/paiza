#include <stdio.h>
int main(void){
    int num, distance, f_distance, f_fee, e_distance, e_fee, total = 0;
    int max = 0, min = 50000000;

    char str[1000];
    fgets(str, sizeof(str), stdin);
    sscanf(str, "%d %d", &num, &distance);

    int i = 0, distance_x = distance;
    while(i < num){
        fgets(str, sizeof(str), stdin);
        sscanf(str, "%d %d %d %d", &f_distance, &f_fee, &e_distance, &e_fee);

        total += f_fee;
        distance_x -= f_distance;
        while(distance_x >= 0){
            distance_x -= e_distance;
            total += e_fee;
        }
        if(max < total){
            max = total;
        }
        if(min > total){
            min = total;
        }
        distance_x = distance;
        total = 0;
        i++;
    }

    printf("%d %d", min, max);


    return 0;
}
