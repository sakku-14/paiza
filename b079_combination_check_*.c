#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int change(char alf){
    int x;

    if(alf == 'a'){
        x = 1;
    } else if(alf == 'b'){
        x = 2;
    } else if(alf == 'c'){
        x = 3;
    } else if(alf == 'd'){
        x = 4;
    } else if(alf == 'e'){
        x = 5;
    } else if(alf == 'f'){
        x = 6;
    } else if(alf == 'g'){
        x = 7;
    } else if(alf == 'h'){
        x = 8;
    } else if(alf == 'i'){
        x = 9;
    } else if(alf == 'j'){
        x = 10;
    } else if(alf == 'k'){
        x = 11;
    } else if(alf == 'l'){
        x = 12;
    } else if(alf == 'm'){
        x = 13;
    } else if(alf == 'n'){
        x = 14;
    } else if(alf == 'o'){
        x = 15;
    } else if(alf == 'p'){
        x = 16;
    } else if(alf == 'q'){
        x = 17;
    } else if(alf == 'r'){
        x = 18;
    } else if(alf == 's'){
        x = 19;
    } else if(alf == 't'){
        x = 20;
    } else if(alf == 'u'){
        x = 21;
    } else if(alf == 'v'){
        x = 22;
    } else if(alf == 'w'){
        x = 23;
    } else if(alf == 'x'){
        x = 24;
    } else if(alf == 'y'){
        x = 25;
    } else {
        x = 26;
    }

    return x;
}

int sum(int a, int b){
    int y = 0;
    y = a + b;
    while(y > 101){
        y -= 101;
    }
    return y;
}

#define N 2000
int main(void){

    char str[1000];
    char name[N], name_2[N];
    fgets(str, sizeof(str), stdin);
    sscanf(str, "%s %s", name, name_2);

    strcat(name,name_2);
    printf("%s\n", name);

    int container[N];

    for( int i = 0; i < strlen(name); i++){
        container[i] = change(name[i]);
        printf("%d ", container[i]);                            //checker
    }

    printf("\n");                                               //checker

    while(container[1] != '\0'){
        int j = 0;
        while(container[j + 1] != '\0'){
            container[j] = sum(container[j],container[j + 1]);
            printf("%d ", container[j]);                            //checker
            j++;
        }
        printf("\n");                                               //checker
        container[j] = '\0';
    }

    printf("%d\n", container[0]);

    return 0;
}
