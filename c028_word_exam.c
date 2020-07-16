#include <stdio.h>
#include <string.h>

int main(void){

    char str[1000];
    int num;
    char ans[30];
    char word[30];
    int score = 0;
    int length_ans, length_word;
    int checker = 0;


    fgets(str, sizeof(str), stdin);
    sscanf(str, "%d", &num);
    // printf("単語数:%d\n", num);                                      //チェッカー


    for(int i = 0; i < num; i ++){
        fgets(str, sizeof(str), stdin);
        sscanf(str, "%s %s", ans, word);
        // printf("答え:%s 解答:%s\n", ans, word);                      //チェッカー
        length_ans = strlen(ans);
        length_word = strlen(word);
        if(length_ans == length_word){
            if(strcmp(ans, word) == 0){
                score += 2;
                // printf("現score:%d\n", score);                          //チェッカー
            } else {
                int k = 0;
                while(word[k] != '\0'){
                    if(ans[k] != word[k]){
                        checker++;
                    }
                    k++;
                }
                    if(checker == 1){
                        score++;
                        // printf("現score:%d\n", score);                          //チェッカー
                    }
                checker = 0;
            }
        }
    }

    printf("%d", score);
    return 0;
}
