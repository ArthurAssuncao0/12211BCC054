/2

#include <stdio.h>
#include <stdlib.h>

int main(){
    int i, *x, N;

    x = (int*) malloc (sizeof(int) * 4);

    printf("Digite o tamanho do seu vetor:\n");
    scanf("%d", &N);

    for(i = 0; i < N; i++){
        printf("Digite os elementos do seu vetor:\n");
        scanf("%d", &x[i]);
    }

    for(i = 0; i < N; i++){
        printf("Na posicao %d do seu vetor o elemento eh %d\n", i, x[i]);
    }


    system("pause");
    return 0;
}

/4

#include <stdio.h>
#include <stdlib.h>

int fun (char *x, int N){
    int i;

    x = (char*) malloc (N);

    printf("Digite uma frase:\n");
    scanf(" %[^\n]s", x);

    for(i = 0; i < N; i++){
        if(x[i] == 'a' || x[i] == 'A' || x[i] == 'e' || x[i] == 'E' || x[i] == 'i' || x[i] == 'I' || x[i] == 'o' || x[i] == 'O' || x[i] == 'u' || x[i] == 'U' || x[i] <= '\0'){
            x[i] = 127;
        }
    } 

    printf("\n");
   
    printf("A frase sem voguais eh: %s\n", x);

}

int main(){
    char *x; 
    int N;

    printf("Digite o tamanho do seu vetor:\n")/
    scanf("%d", &N);

    fun (x, N);

    
    system("pause");
    return 0;
}

/6

#include <stdio.h>
#include <stdlib.h>

int main(){
    int *x, N, i;

    printf("Digite o tamanho do seu vetor:\n");
    
    do{
        scanf("%d", &N);
        if(N % 4 != 0){
           printf("Memoria nao alocada! Digite um novo tamanho\n"); 
        }
        else{
            x = (int*) malloc (sizeof(int) * N);
        }
    }
    while(N % 4 != 0);
        
    for(i = 0; i < N; i++){
        x[i] = 0;
    }
    
    while(1){
        int y, y1, y2;
        
        printf("Digite 1 - Para alocar um valor em uma determinada posicao de memoria\nDigite 2 - Para consultar um valor em uma determinada posicao\n3 - Sair\n");
        scanf("%d", &y);
        
        if(y == 1){
            printf("Digite a posicao que voce quer inserir um valor:\n");
            scanf("%d", &y1);
            printf("Digite o valor que voce deseja inserir:\n");
            scanf("%d", &y2);
            
            x[y1] = y2;
        }
        else if(y == 2){
            printf("Digite a posicao que voce quer consultar:\n");
            scanf("%d", &y1);
            printf("O valor contido na memoria na posicao %d eh %d\n", y1, x[y1]);
        }
        else if(y == 3){
            break;
        }
        else{
            printf("Nao listado no menu!\n");
        }
    }
    
    
    system("pause");
    return 0;
}
/8

#include <stdio.h>
#include <stdlib.h>

int main(){
    int *x, i;

    x = (int*) calloc (1500, (sizeof(int)));
    
    for(i = 0; i < 1500; i++){
        x[i] = 0;
    }
    
    for(i = 0; i < 1500; i++){
        printf("%d", x[i]);
    }
       
    for(i = 0; i < 1500; i++){
        x[i] += i;
    }
    
    printf("\n");
    
    printf("\nDez primeiros elementos\n");
    for(i = 0; i < 10; i++){
        printf("Na posicao %d o valor do elemento eh %d\n", i, x[i]);
    }
    
    printf("\n");
    
     printf("Dez ultimos elementos\n");
    for(i = 1489; i < 1500; i++){
        printf("Na posicao %d o valor do elemento eh %d\n", i, x[i]);
    }
    
    system("pause");
    return 0;
}

/10

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    double *x;
    int i, N;
    
    printf("Digite a quantidade de valores que voce deseja armazenar em um vetor:\n");

    do{
        scanf("%d", &N);

        if(N < 10){
            printf("Memoria nao alocada! Digite um novo valor:\n");
        }
        else{
            x = (double*) malloc (sizeof(double) * N);
        }
    }
    while(N < 10);

    printf("\n");

    srand(time(NULL));

    for(i = 0; i < N; i++){
        x[i] = rand() % 100;
    }

    for(i = 0; i < 10; i++){
        printf("O valor escolhido, aleatoriamente, para a posicao %d eh %g\n", i, x[i]);
    }

    
    system("pause");
    return 0;
}

/12

#include <stdio.h>
#include <stdlib.h>

struct produto{
    int cod, quant;
    char nome[50];
    float preco;
};
typedef struct produto p;

int main(){
    p *x;
    int i, N, max = 0, A, B;
    float max1 = 0;
    
    printf("Digite quantos produtos voce deseja fornecer informacoes:\n");
    scanf("%d", &N);

    printf("\n");

    x = (p*) malloc (sizeof(p) * N);

    printf("PRODUTOS\n");

    printf("\n");

    for(i = 0; i < N; i++){
        printf("Nome do produto:\n");
        scanf(" %[^\n]s", &x[i].nome);
        printf("Digite o codigo:\n");
        scanf("%d", &x[i].cod);
        printf("Digite a quantidade desse produto no estoque:\n");
        scanf("%d", &x[i].quant);
        printf("Digite o preco do produto:\n");
        scanf("%f", &x[i].preco);
        printf("\n");

        if(x[i].quant > max){
            max = x[i].quant;
            B = i;
        }

        if(x[i].preco > max1){
            max1 = x[i].preco;
            A = i;
        }
    }

    printf("O produto que possui maior preco eh o: %s\n", x[A].nome);

    printf("O produto que possui a maior quantidade no estoque eh: %s\n", x[B].nome);
    
    
    system("pause");
    return 0;
}

/14

#include <stdio.h>
#include <stdlib.h>

int main(){
    float **x;
    int N, i, j, c1 = 0, c2 = 0;

    printf("Digite a quantidade de linhas e colunas de uma matriz:\n");
    scanf("%d", &N);

    x = (float**) malloc (sizeof(float) * N);

    for(i = 0; i < N; i++){
        x[i] = (float*) malloc (sizeof(float) * N);
        c1++;
        for(j = 0; j < N; j++){
            printf("Digite um valor para a linha %d e coluna %d:\n", i, j);
            scanf("%f", &x[i][j]);
            c2++;
        }
    }

    printf("\n");
 
    for (i = 0; i < N; i++){
        for (j = 0; j < N; j++){
            printf("%g", x[i][j]); 
        }
    }
    
    printf("\n");

    printf("Quantidade de linhas: %d\nQuantidade de colunas: %d\n", c1, c2); 


    system("pause");
    return 0;
}

/16

#include <stdio.h>

int main (){
    float N, M, **x;
    int i, j;

    printf("Digite um valor para N:\n");
    scanf("%f", &N);

    printf("Digite um valor para M:\n");
    scanf("%f", &M);

    x = (float**) malloc (sizeof(float) * 4);

    for(i = 0; i < N; i++){
        x[i] = (float*) malloc (sizeof(float) * 4);
        for(j = 0; j < M; j++){
            printf("Digite um valor para a linha %d e coluna %d:\n", i, j);
            scanf("%f", &x[i][j]);
        }
    }

    for(i = 0; i < N; i++){
        for(j = 0; j < M; j++) {
            printf("|%g| ", x[i][j]); 
        }
        printf("\n");
    }
       
    for(i = 0; i < M; i++){
        for (j = 0; j < N; j++) {
            printf("|%g| ", x[j][i]); 
        }
    printf("\n"); 
    }


    system("pause");
    return 0;
}

/18

#include <stdio.h>
#include <stdlib.h>

struct produto{
    char nome[30]; 
    int cod; 
    float preco; 
}; 
typedef struct produto p;

void vetor(int *pv){ 
    int i; 
        
    pv = (int*) malloc (sizeof(int) * 1024); 
    
    printf("Alocado na memoria!\n"); 
    
    for(i = 0; i < 1024; i++) {
        *(pv + i) = i;  
        printf("Posicao %d: Byte %d\n", i, *(pv + i) + 1); 
    }
    
    printf("\n");
}

void matriz(int **mat){
    int i, j; 

    mat = (int**) malloc (sizeof(int) * 10); 
    
    for(i = 0; i < 10; i++){
        mat[i]= (int*) malloc (sizeof(int) * 10); 
        for (j = 0; j < 10; j++){
            mat[i][j] = i;
            printf ("|%d| ", mat[i][j] + 1); 
        }
    }
    printf("\n"); 
}

void registro(p *x){ 
    int i; 
        
    x = (p*) malloc (sizeof(struct produto) * 30); 
    
    printf("\n");
    
    for (i = 0; i < 30; i++) {
        fflush(stdin);
        printf("Digite o codigo do produto %d:\n", i); 
        scanf(" %[^\n]s", &x[i].nome); 
        printf("Digite o codigo de identificacao do produto:\n");
        fflush(stdin); 
        scanf("%d", &x[i].cod); 
        printf("Digite o preco desse produto:\n");
        fflush(stdin); 
        scanf("%f", &x[i].preco);
    }
    
    printf("\n");
}

void tex(int *l, char *t){
    int i, j;

    l = (int *) malloc (sizeof(int) * 100); 
    
    for (i = 0; i < 100; i++){
        t = (char*) malloc (sizeof(char) * 80); 
        for (j = 0; j < 80; j++){
            t = 'a'; 
            printf(" %c", t + 1); 
        }
    }
    
    printf("\n");
}
 
int main (){

    p *x;
    int *pv, **mat, *l;
    char *t;

    vetor(pv); 

    matriz(mat); 

    registro(x); 

    tex(l, t); 

    
    system("pause");
    return 0;  
}

/20

{
    c *x; 
    int N, i, j; 
    float **mat, coorX, coorY;  

    printf("Digite a quantidade de cidades que voce deseja calcular a(s) distancia(s)?\n"); 
    scanf("%d", &N); 

    x = (c*) malloc (sizeof(c) * N); 

    for(i = 0; i < N; i++){
        fflush(stdin);
        printf("Apresente o nome da cidade %d:\n", i + 1);
        scanf(" %[^\n]s", &x[i].nome);
        fflush(stdin);
        printf("Apresente a posicao dessa cidade: "); 
        fflush(stdin); 
        scanf("%f", &x[i].posicao); 
        fflush(stdin); 
        printf("\n"); 
    }

    mat = (float**) malloc (sizeof(float) * N);
    
    for(i = 0; i < N; i++) {
        mat[i]= (float*) malloc (sizeof(float) * N); 
        for (j = 0; j < N; j++) {
            mat[i][j] = x[i + 1].posicao - x[i].posicao; 
            printf("Distancia entre cidades %d e %d: %f\n", i, j, mat[i][j]);
        }
    printf("\n"); 
    }

    for(i = 0; i < N; i++){
        for(j = 0; j < N; j++){
            printf("%f ", mat[i][j]);
        }
    printf("\n"); 
    }

    printf("Digite uma coordenada X:\n"); 
    scanf("%f",&coorX);
    printf("Digite uma coordenada Y:\n"); 
    scanf("%f", &coorY);
    
    for(i = 0; i < N; i++){
        if (coorX == x[i].posicao && coorY == x[i].posicao){
            for(i = 0; i < N; i++){
                for (j = 0; j < N; j++){
                    printf("A distancia entre essas duas cidades eh: %f", mat[i][j]); 
                }
            }
        }
    }

    system("pause");
    return 0;  
}

