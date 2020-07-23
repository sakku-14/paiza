#include <stdio.h>
int main(void){

    char str[1000];
    int bushes, rabbits, jumps;

    fgets(str, sizeof(str), stdin);
    sscanf(str, "%d %d %d", &bushes, &rabbits, &jumps);

    int place[100] = {0};
    int i = 0, j = 0, k = 0;

    //place配列に順番にi番目のうさぎのポジション代入
    while(i < rabbits){
        fgets(str, sizeof(str), stdin);
        sscanf(str, "%d", &place[i]);
        // printf("%d\n", place[i]);            //checker
        i++;
    }

    i = 0;
    while(k < jumps){                           //ジャンプの数分繰り返し
        // printf("%d回目\n", k + 1);              //checker
        while(i < rabbits){                     //うさぎの匹数分繰り返し→各ジャンプに対して全うさぎのアクション
            place[i]++;
            if(place[i] > bushes) place[i] -= bushes;       //bushesより大きい数になったらbushes分引く
            while(j < rabbits){           //j < i
                if(j == i){
                    if(j != rabbits -1){
                        j++;
                    } else {
                        break;
                    }
                }
                if(place[i] == place[j]) place[i]++;
                if(place[i] > bushes) place[i] -= bushes;   //bushesより大きい数になったらbushes分引く
                j++;
            }
            j = 0;
            while(j < rabbits){           //j < i
                if(j == i){
                    if(j != rabbits -1){
                        j++;
                    } else {
                        break;
                    }
                }
                if(place[i] == place[j]) place[i]++;
                if(place[i] > bushes) place[i] -= bushes;   //bushesより大きい数になったらbushes分引く
                j++;
            }
            j = 0;
            // printf("%d\n", place[i]);           //checker
        i++;
        }
        i = 0;
        //printf()
        k++;
    }

    i = 0;
    while(i < rabbits){
        printf("%d\n", place[i]);
        i++;
    }


    return 0;
}
