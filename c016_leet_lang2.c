#include <stdio.h>
#include <string.h>

int main(void){
    // 自分の得意な言語で
    // Let's チャレンジ！！

    char str[100];
    char words[100];
    fgets(str, sizeof(str), stdin);
    sscanf(str, "%s", words);

    int n;
    n = strlen(words);




    for(int i = 0; i < n; i++){
        if(strncmp(&words[i], "A", 1) == 0){
            printf("4");
        } else if (strncmp(&words[i], "E", 1) == 0){
            printf("3");
        } else if (strncmp(&words[i], "G", 1) == 0){
            printf("6");
        } else if (strncmp(&words[i], "I", 1) == 0){
            printf("1");
        } else if (strncmp(&words[i], "O", 1) == 0){
            printf("0");
        } else if (strncmp(&words[i], "S", 1) == 0){
            printf("5");
        } else if (strncmp(&words[i], "Z", 1) == 0){
            printf("2");
        } else {
            printf("%c", words[i]);
        }
    }

    return 0;
}
