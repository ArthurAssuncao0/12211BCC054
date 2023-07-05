//VETORES

/1 

#include <stdio.h>

int main(){
    int i, A[6] = {1, 0, 5, -2, -5, 7};
    int s = A[0] + A[1] + A[5];
    printf ("A soma dos vetores eh: %d\n", s);

    A[4] = 100;

    printf("O vetor A[4] possui o valor: %d\n", A[4]);

    for (i = 0; i < 6; i++){
        printf("O vetor equivale a: %d\n", A[i]);
    }

system("pause");
return 0;
}

/2

#include <stdio.h>

int main(){
int vet[8];
int i, x, y;

    for (i = 0; i < 8; i++){
        printf("Apresente um valor para posicao: %d\n", i);
        scanf("%d", &vet[i]);
    }

    printf("Digite a posicao que voce deseja somar:\n");
    scanf("%d", &x);

    printf("Digite a posicao que voce deseja somar:\n");
    scanf("%d", &y);

    printf("A soma das duas posicoes desse vetor eh: %d\n", vet[x] + vet[y]);

system("pause");
return 0; 
}

/3 

#include <stdio.h>

int main(){
int vet[6];
int i, x, y;

    for (i = 0; i < 6; i++){
        printf("Apresente um valor para posicao: %d\n", i);
        scanf("%d", &vet[i]);
    }

    for (i = 5; i >= 0; i--){
        printf("%d\n", vet[i]);
    }
   

system("pause");
return 0; 
}

/4

#include <stdio.h>

int main(){
int vet[5];
int i, man, men;

    for (i = 0; i < 5; i++){
        printf("Apresente um valor para posicao: %d\n", i);
        scanf("%d", &vet[i]);
    }
    
    man = vet[0];

    for (i = 1; i < 5; i++){
        if (man < vet[i]){
            man = vet[i];
        }
    }
    printf("O maior eh: %d\n", man);

    men = vet[0];

    for (i = 1; i < 5; i++){
        if (men > vet[i]){
            men = vet [i];
        }
    }
    printf("O menor eh: %d\n", men);


system("pause");
return 0; 
}

/5

#include <stdio.h>

int main(){
int i, j;
int vet[50];

    for (i = 0; i < 50; i++){
        printf("Apresente um valor para posicao: %d\n", i);
        scanf("%d", &j);
        vet[i] = (j + 5 * j) % (j + 1);
    }
    for (i = 0; i < 5; i++){
        printf("%d", vet[i]);
    }


system("pause");
return 0; 
}

/6

#include <stdio.h>

int main (){
    int i, j;
    int vet[10];

        for (i = 0; i < 10; i++){
        printf("Apresente um valor para posicao %d:\n", i);
        scanf("%d", &vet[i]);
        }
        
		printf("O vetor possui os seguintes numeros:\n");
		for (i = 0; i < 10; i++){
            printf("%d\n", vet[i]);
        }

        for (i = 0; i < 10; i++){
            int r = 0;

            for (j = 2; j < vet[i]; j++){
                if(vet[i] % j == 0){
                    r++;
                }
            }

            if (r == 0)
            printf("O numero %d eh primo, na posicao %d\n", vet[i], i);

        }
    

system("pause");
return 0;
}

/7

#include <stdio.h>

int main (){
    int i = 0, s = 0, qi = 0;
    int vet[6];

        for (i = 0; i < 6; i++){
        printf("Apresente um valor para posicao %d:\n", i);
        scanf("%d", &vet[i]);
        }

        for (i = 0; i < 6; i++){
            if(vet[i] % 2 == 0){
                printf("O vetor possui os seguintes numeros pares: %d\n", vet[i]);
                s += vet[i];
            }
            else if (vet[i] % 2 != 0){
                printf("O vetor possui os seguintes numeros impares: %d\n", vet[i]);
                qi++;
            }
        }
        printf("A soma dos pares eh: %d\n", s);
        printf("A quantidade de impares eh igual a: %d\n", qi);

system("pause");
return 0;
}

/8

#include <stdio.h>

int main (){
    int i = 0, x;
    int vet[10];

    for (i = 0; i < 10; i++){
        printf("Apresente um valor para posicao %d:\n", i);
        scanf("%d", &vet[i]);
    
        for (x = 0; x < i; x++){
            if (vet[i] == vet[x]){
                printf("NUMERO REPETIDO\n");
                i--;
            }
        }
    }

    printf("O vetor possui os seguintes numeros:\n");
	    for (i = 0; i < 10; i++){
            printf("%d\n", vet[i]);
        }


system("pause");
return 0;
}

//MATRIZES

/1

#include <stdio.h>

int main (){;
    int mat[4][4];
    int i, j, x;
    printf("Digite os elementos da matriz:\n");
        for(i = 0; i < 4; i++){
            for (j = 0; j < 4; j++){
                scanf("%d", &mat[i][j]);
            
			if(mat[i][j] > 10){
				x++;
			}  
            }
        }
        printf("Existem %d numeros maiores do que 10\n", x);

system("pause");
return 0;
}

/2

#include <stdio.h>

int main (){;
    int mat[5][5];
    int i, j, x;
        for(i = 0; i < 5; i++){
            for (j = 0; j < 5; j++){
                if (i == j){
                    mat[i][i] = 0;
                }
                else{
                    mat[i][j] = 1;
                }
            }
        }
        for(i = 0; i < 5; i++){
            for (j = 0; j < 5; j++){
                printf("%d", mat[i][j]);
            }
            printf("\n");
        }


system("pause");
return 0;
}

/3

#include <stdio.h>

int main (){;
    int mat[4][4];
    int i, j, ma, pi, pj;
        for(i = 0; i < 4; i++){
            for (j = 0; j < 4; j++){
                printf("Digite o valor da linha e coluna na mat[%d][%d]:\n", i, j);
                scanf("%d", &mat[i][j]);
                
                if(ma < mat[i][j]){
                    ma = mat[i][j];
                    pi = i;
                    pj = j;
                }
            }
        printf("\n");
        }

         for(i = 0; i < 4; i++){
            for (j = 0; j < 4; j++){
              printf("%d", mat[i][j]);
            }
        printf("\n");
        }
        printf("O maior eh %d, localizado na linha %d e coluna %d.", ma, pi, pj);


system("pause");
return 0;
}

/4

#include <stdio.h>

int main (){;
    int mat[5][5];
    int i, j, x = 0, r = 0;
        for(i = 0; i < 5; i++){
            for (j = 0; j < 5; j++){
                printf("Digite o valor da linha e coluna na mat[%d][%d]:\n", i, j);
                scanf("%d", &mat[i][j]);
            }
        }
        
        printf("Digite o numero que voce deseja encontrar:\n");
        scanf("%d", &x);
        
        for(i = 0; i < 5; i++){
            for (j = 0; j < 5; j++){
                if(mat[i][j] == x){
                    printf("As posicoes de %d corresponde a linha %d e coluna %d\n.", x,  i, j);
                    r++;
                }
            }      
        }
        if (r == 0){
            printf("Valor nao encontrado\m");
        }

system("pause");
return 0;
}

/5

#include <stdio.h>
#include <math.h>

int main (){
    int mat[10][10];
    int i = 0, j = 0;

        for(i = 0; i < 10; i++){
            for (j = 0; j < 10; j++){

                if (i < j){
                    mat[i][j] = ((2 * i) + (7 * j) - 2);
                    printf("Na linha %d e coluna %d a matriz eh: %d\n", i, j, mat[i][j]);
                }
                else if (i == j){
                    mat[i][j] = 3 * (pow(i , 2)) - 1;
                    printf("Na linha %d e coluna %d a matriz eh: %d\n", i, j, mat[i][j]);
                }
                else if(i > j){
                    mat[i][j] = 4 * (pow(i , 3)) - 5 * (pow(i , 2)) + 1;
                    printf("Na linha %d e coluna %d a matriz eh: %d\n", i, j, mat[i][j]);
                }
            }
        }
   

system("pause");
return 0;
}

/6

#include <stdio.h>

int main(){
    int mat[4][4], i, j;
    
    for (i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++){
            do{
                printf("Digite um numero para a posicao de matriz[%d][%d]:\n", i, j);
                scanf("%d", &mat[i][j]);
            } 
            while(mat[i][j] < 0 && mat[i][j] > 21);
        }
    }
    
    for(int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++){
            printf("%d", mat[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++){
            if (j > i){
                mat[i][j] = 0;
            }
        }   
    }

    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++){
            printf("%d", mat[i][j]);
        }
        printf("\n");
    }


system("pause");
return 0;
}

/7

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int mat[5][5] = {}, vet[25], r = 0, c =0, c1 = 0, c2 = 0, c3 = 0, i = 0, j = 0;
    srand(time(NULL));
    
    for (c3 = 0; c3 < 25; c3++){
        do{
            vet[c3] = (rand() % 100);

            r = 0;

            for (int c1 = 0; c1 < c2; c1++){
                if (vet[c1] == vet[c2]){
                    r++;
                }
            }

        }
        while(r != 0);
        c2++;
    }
    
    for (i = 0; i < 5; i++){
        for (j = 0; j < 5; j++){
           mat[i][j] = vet[c];
            c++;
        }
    }

    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){
            printf("%d", mat[i][j]);
        }
        printf("\n");
    }

system("pause");
return 0;
}

/8

#include <stdio.h>
#include <stdlib.h>

int main(){
    int mat[2][2], mat_2[2][2], mat_r[2][2], i = 0,j = 0,n = 0;
    char k;

    printf("Primeira matriz:\n");

    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 2; j++){
            printf("Digite um numero [%d][%d]:\n", i, j);
            scanf("%d", &mat[i][j]);
        }
    }
    
    printf("Segunda matriz:\n");

    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 2; j++){
            printf("Digite um nuemro [%d][%d]:\n", i, j);
            scanf("%d", &mat_2[i][j]);
        }
    }
    
    do{
        printf("Selecione uma opcao:\n1 - Somar duas matrizes\n2 - Subtrair a primeira matriz pela segunda\n3 - Adicionar uma constante em ambas matrizes\n4 - Imprimir ambas as matrizes\n");
        scanf(" %c", &k);

        if (k == '1' || k == '2' || k == '3' || k == '4')
            k = k - 32;
    } 
    while ((k != '1') && (k != '2') && (k != '3') && (k != '4'));

    switch (k){
        case '1':
            for (int i = 0; i < 2; i++){
                for (int j = 0; j < 2; j++){
                    mat_r[i][j] = mat[i][j] + mat_2[i][j];
                }
            }

            for (int i = 0; i < 2; i++){
                for (int j = 0; j < 2; j++){
                    printf("[ %d ] ",mat_r[i][j]);
                }
                printf("\n");
            }
        break;
        
        case '2':
            for (int i = 0; i < 2; i++){
                for (int j = 0; j < 2; j++){
                    mat_r[i][j] = mat[i][j] - mat_2[i][j];
                }
            }

            for (int i = 0; i < 2; i++){
                for (int j = 0; j < 2; j++){
                    printf("%d",mat_r[i][j]);
                }
                printf("\n");
            }
        break;

        case '3':
            printf("Digite a linha que voce deseja trocar: ");
            scanf("%d", &i);
            
            printf("Digite a coluna que voce deseja trocar: ");
            scanf("%d", &j);

            printf("Digite o numero que voce deseja adicionar: ");
            scanf("%d", &n);

            mat[i][j] = n;
            mat_2[i][j] = n;

            printf("\n");

        break;

        case '4':
            for (int i = 0; i < 2; i++){
                for (int j = 0; j < 2; j++){
                    printf("%d",mat[i][j]);
                }
                printf("\n");
            }

            for (int i = 0; i < 2; i++){
                for (int j = 0; j < 2; j++){
                    printf("[ %d ] ",mat_2[i][j]);
                }
                printf("\n");
            }
        break;
    }

system("pause");
return 0;
}
