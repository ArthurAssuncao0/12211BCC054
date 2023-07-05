#include <stdio.h>

int main(){
    char frase[500] = " ";
    int i = 0;

    printf("Digite uma frase de Cebolinha:\n");
    fgets(frase, 500, stdin);

    for (i = 0; i < 500; i++){
        if ((frase[i] == 'r' || (frase[i] == 'R')) && (frase[i + 1] == 'r')){
            if ("R")
            printf("L");

            else
            printf("l");
            
            i++;
        }

        else if ((frase[i] == 'r' || (frase[i] == 'R')) && (frase[i + 1] == ' ' || frase [i + 1] <= '\0')){
            if ('R')
            printf("R");

            else
            printf("r");
        }
        
        else if (frase[i] == 'r' || (frase[i] == 'R')){
            if ("R")
            printf("L");

            else
            printf("l");
        }

        else{
        printf("%c", frase[i]);
        }
    }

system("pause");
return 0;
}

