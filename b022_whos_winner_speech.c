#include <stdio.h>
int main(void){

    char str[1000];
    int candidates, voter, speech;
    fgets(str, sizeof(str), stdin);
    sscanf(str, "%d %d %d", &candidates, &voter, &speech);

    int candedate[candidates+1], who;

    for(int i = 1; i <= candidates; i++){
        candedate[i] = 0;
    }

    for(int i = 1; i <= speech; i++){
        fgets(str, sizeof(str), stdin);
        sscanf(str, "%d", &who);
        if(i <= voter){
            candedate[who] += 1;
        }
        for(int j = 1; j <= candidates; j++){
            if(j != who){
                if(candedate[j] >= 1){
                    candedate[j] -= 1;
                    candedate[who] += 1;
                }
            }
        }
    }

    int max = 0;
    for(int i = 1; i <= candidates; i++){
        // printf("%d ", candedate[i]);               //checker
        if(candedate[i] >= max){
            max = candedate[i];
            // winner = i;
        }
    }
    // printf("\n");                                   //checker

    for(int i = 1; i <= candidates; i++){
        if(candedate[i] == max){
            printf("%d\n", i);
        }
    }
    return 0;
}
