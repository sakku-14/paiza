#include <stdio.h>
#include <string.h>

int main(void){

    char str[1000];
    char words[100];
    fgets(str, sizeof(str), stdin);
    sscanf(str, "%s", words);

    int n;
    n = strlen(words);




    for(int i = 0; i < n; i++){
        if(words[i] == 'A'){
            printf("4");
        } else if (words[i] == 'E'){
            printf("3");
        } else if (words[i] == 'G'){
            printf("6");
        } else if (words[i] == 'I'){
            printf("1");
        } else if (words[i] == 'O'){
            printf("0");
        } else if (words[i] == 'S'){
            printf("5");
        } else if (words[i] == 'Z'){
            printf("2");
        } else {
            printf("%c", words[i]);
        }
    }

    return 0;
}
