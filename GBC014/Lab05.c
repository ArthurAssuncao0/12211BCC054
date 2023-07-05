/1
 
#include <stdio.h>

int dobro(int nx);

int main () {
    int n, d;
    printf ("Apresente um numero:\n");
    scanf ("%d", &n);
    d = dobro(n);
    printf ("O dobro desse numero eh:%d\n", d); 


system("pause");
return 0;
}

int dobro (int nx){
	return nx * 2;
}

/2

#include <stdio.h>
#include <math.h>

int data(int d, int m, int a);

int main(){
    int da, ma, aa;
    printf("Apresente uma data:\n");
    scanf("%d %d %d", &da, &ma, &aa);
    data(da, ma, aa); 

system("pause");
return 0;
}

int data (int d, int m, int a){
  switch (m){
    case 1: 
      printf("%d de Janeiro de %d", d, a);
    break;
    case 2: 
      printf ("%d de Fevereiro de %d", d, a); 
    break;
    case 3: 
      printf("%d de Março de %d", d, a); 
    break;
    case 4: 
      printf ("%d de Abril de %d", d, a);
    break;
    case 5: 
      printf("%d de Maio de %d", d, a); 
    break;
    case 6: 
      printf("%d de Junho de %d", d, a); 
    break;
    case 7: 
      printf("%d de Julho de %d", d, a); 
    break;
    case 8: 
      printf("%d de Agosto de %d", d, a); 
    break;
    case 9: 
      printf ("%d de Setembro de %d", d, a); 
    break;
    case 10: 
      printf("%d de Outubro de %d", d, a); 
    break;
    case 11: 
      printf ("%d de Novembro de %d", d, a); 
    break;
    case 12: 
      printf ("%d de Dezembro de %d", d, a); 
    break;
    default: 
      printf("INVALIDO\n"); 
    break;
  }
}

/3 

#include <stdio.h>

int positivo (int po);

int negativo (int ne);

int zero (int i);

int main() {
    int n;
    printf("Digite um numero:\n");
    scanf ("%d",&n);
    
    if (n > 0){
        n = positivo(n);  
        printf ("%d\n", n);
    }
    if (n < 0) {
        n = negativo(n);
        printf("%d\n", n); 
    }
    if (n == 0) {
        n = zero(n);
        printf("%d\n", n);
    }
    

system("pause");
return 0;
}

int positivo (int po){
    return 1;
}
int negativo (int ne){
    return -1; 
}
int zero (int i){
    return 0; 
}

/4

#include <stdio.h>
#include <math.h>

float quadrado_perfeito (float x);

int main (){
    float x;
    printf("Digite um numero:\n");
    scanf("%f", &x);

    x = quadrado_perfeito (x);

system("pause");        
return 0;
}   

float quadrado_perfeito (float x){
    int raiz_q;
    raiz_q = sqrt(x);

    if ((raiz_q * raiz_q) == x){
        printf("Eh quadrado perfeito\n");
    }
    else{
        printf("Nao eh quadrado perfeito\n");
    }

}

/5

#include <stdio.h>
#include <math.h>

int volume(int r);

int main(){
    int r;

    printf("Digite o raio dessa esfera em cm:\n");
    scanf("%d", &r);

    printf("O volume eh: %d cm cubicos", volume (r));


system("pause");
return 0;
}

int volume(int r){
    int c, v;

    c = pow (r, 3);
    v = (4 * M_PI * c/3);

return v;
}

/6
#include <stdio.h>
#include <math.h>

cs (int h, int m, int s);

int main(){
    int h, m, s;
    printf("Digite as horas:\n");
    scanf("%d", &h);
    
    printf("Digite os minutos:\n");
    scanf("%d", &m);
        
    printf("Digite os segundos:\n");
    scanf("%d", &s); 
    
    printf("A conversa em horas, minutos e segundos eh: %d\n", cs(h, m, s));
    

system("pause");
return 0;
}

cs (int h, int m, int s){
    int sx = 0; 
    s = h * 3600;
    s = s + (m * 60);
    s = s + s;

return s;
}

/7

#include <stdio.h>
#include <math.h>

int F(int c);

int main(){

    int c = 0;
	printf("Digite uma temperatura em celsius para conversao:\n");
    scanf("%d", &c);

    printf ("A temperatura em Fahrenheit sera de: %d \n", F(c));


system("pause");
return 0;
}

int F(int c){
    return (c * (9.0 / 5.0) + 32.0);
}

/8

#include <stdio.h>
#include <math.h>

float raiz_h (float a, float b);

int main (){
    float a, b, z;
    printf("Digite dois numeros:\n");
    scanf("%f %f", &a, &b);

    z = raiz_h (a, b);

    printf("A raiz eh:%.2f\n", z);

system("pause");        
return 0;
}   

float raiz_h (float a, float b){
    float r;
    r = sqrt((a * a) + (b * b));
    return r;
}

/9

#include <stdio.h>
#include <math.h>

float volume(float h, float r);

int main(){
    float h, r;

    printf("Digite a altura de um cilindro:\n");
    scanf("%f", &h);

    printf("Digite o raio de um cilindro:\n");
    scanf("%f", &r);

    printf("O volume de um cilindro eh:%.2f\n", volume(h, r));


system("pause");
return 0;
}

float volume(float h, float r){
    float v;

    v = M_PI * (r * r) * h;

return v;
}

/10

#include <stdio.h>

int main(){
    int anal, n1, n2;
    printf("Digite um primeiro valor para analise:\n");
    scanf("%d", &n1);
    
    printf("Digite um segundo valor para analise:\n");
    scanf("%d", &n2);
   
    anal = maior(n1, n2);

    switch(anal){
        case 1:
            printf("%d > %d\n", n1, n2);
        break;
        case 2:
            printf("%d > %d\n", n2, n1);
        break;
        case 3:
            printf("%d = %d\n", n1, n2);
        break;
    }


system("pause");
return 0;
}

int maior(int n1, int n2){
    if (n1 > n2){
        return 1;
    }   
    else if (n1 < n2){
        return 2;
    }
    else if (n1 == n2){
        return 3;
    }
}

/11

#include <stdio.h> 
#include <math.h>


float media (float n1, float n2, float n3, char l);

int main(){
    float m, n1, n2, n3;
    char l;

    printf("Digite a primeira nota: ");
    scanf("%f", &n1);
    printf("Digite a segunda nota: ");
    scanf("%f", &n2);
    printf("Digite a terceira nota: ");
    scanf("%f", &n3);

    printf("Digite (a) para aritmetica, (p) ponderada: ");
    scanf(" %c", &l);
    
    m = media(n1, n2, n3, l);

    if (l == 'a' || l == 'A'){
        printf ("A media aritmetica eh:\n");
    }
    else if(l == 'p' || l == 'P'){
        printf ("A media ponderada eh:\n");
    }
    printf("%.2f\n", m);


system("pause");
return 0;
}

float media (float n1, float n2, float n3, char l){
    if(l == 'a' || l == 'A')
        return (n1+n2+n3)/3;
    else if(l == 'p' || l == 'P')
        return ( (n1*5) + (n2*3) + (n3*2) )/10;
}

/12

#include <stdio.h>
#include <math.h>

int soma_d (int x);

int main (){
    int x, y;
    printf("Digite um numero:\n");
    scanf("%d", &x);
    
    if (x == 0){
        printf("INVALIDO\n");
    }
    else{
    y = soma_d (x);

    printf("A soma dos digitos do numero %d eh: %d\n", x ,y);
    }

system("pause");
return 0;
}

int soma_d (int x){
    int r, t = 0;
    
    while (x > 0){
        r = x % 10;
        x = (x - r)/10;
        t += r;
    }

return t; 
}

/13

#include <stdio.h>
#include <math.h>

int operacao (int n1, int n2, char o);

int main (){
    int n1, n2;
    char o;

    printf("Digite o primeiro valor:\n");
    scanf("%d", &n1);
    printf("Digite o segundo valor:\n");
    scanf("%d", &n2);

    printf("Para adicao, digite: +\nPara subtracao, digite:n -\nPara multiiplicacao, digite: *\nPara divisao, digite: /\n");
    scanf(" %c", &o);

    printf("O resultado da operacao eh:%d\n", operacao (n1, n2, o));
    

system("pause");
return 0;
}

int operacao (int n1, int n2, char o){
    switch (o){
        case '+':
            return n1 + n2;
        break;
        case '-':
            if (n1 > n2){
                return n1 - n2;
            }
            return n2 - n1;
        break;
        case '*':
            return n1 * n2;
        break;
        case '/':
            if (n1 > n2){
                return n1 / n2;
            }
            return n2 / n1;
        break;
    }
}

/14

#include <stdio.h>
#include <math.h>
 
int  calculo (float d, float con);

 int main(){
    float km, qt;
    printf ("Apresente a distancia em quilometros e a quantidade de litros de gasolina consumidos em um percurso:\n"); 
    scanf ("%f %f", &km, &qt); 
    calculo(km, qt); 

    if (calculo(km, qt) < 8) {
        printf ("VENDA O CARRO!");
    } 
	
	if (calculo(km, qt) > 8 && calculo(km, qt) < 14) {
        printf("ECONOMICO!"); 
    } 
	
	if (calculo(km, qt) > 14) {
        printf("SUPER ECONOMICO!"); 
    }


system("pause");
return 0;
}

int  calculo (float d, float con){ 
    float r; 
    r = d / con;
    return r;
}

/15

#include <stdio.h>

int trianguloE (int l1, int l2, int l3);

int trianguloT (int l1, int l2, int l3);

int main(){
    int l1, l2, l3, r;
    printf("Digite o valor dos tres lados de um triangulo:\n");
    scanf("%d %d %d", &l1, &l2, &l3);
    
    r = trianguloE (l1, l2, l3);

    if (r == 1){
        printf("O triangulo existe\n");
        trianguloT (l1, l2, l3);
    }
    else if(r == 0){
        printf("O triangulo nao existe\n");
        return 0;
    }


system("pause");
return 0;
}

int trianguloE (int l1, int l2, int l3){
    if ((l1 < l2 + l3) && (l2 < l1 + l3) && (l3 < l1 + l2)){
        return 1;
    }
    else{
        return 0;
    }
}

int trianguloT (int l1, int l2, int l3){
    if (l1 == l2 && l1 == l3 && l2 == l3)
        printf("O triangulo eh equilatero\n");

    else if (l1 != l2 && l1 != l3 && l2 != l3)
        printf("O triangulo eh escaleno\n");
    
    else
        printf("O triangulo eh isosceles\n");
}

/16

#include <stdio.h>
#include <math.h>

void desenha_linha (int x);

int main(){
    int x;
    printf("Digite a quantidade de linhas que voce deseja na sequencia:\n");
    scanf("%d", &x);

    desenha_linha (x);

system("pause");
return 0;
}

void desenha_linha (int x){
    int i;
    for (i = 0; i < x; i++)
        printf("=");
    printf("\n");
}

/17

#include <stdio.h>
#include <math.h>

int verificacao (int n1, int n2);

int main (){
    int n1, n2;

    printf("Digite um numero inteiro positivo:\n");
    scanf("%d", &n1);
    printf("Digite outro numero inteiro positivo:\n");
    scanf("%d", &n2);

    printf("A soma dos numeros entre eles eh:%d\n", verificacao (n1, n2));


system("pause");
return 0;
}

int verificacao (int n1, int n2){
    int t;

    if(n1 < n2){
        t = n2 - n1 - 1;

        if ((t % 2) == 0)
        return (t / 2) * (n1 + n2);

        if ((t % 2) != 0)
        return ((t + 1)/ 2) * (n1 + n2);
    }     

    if (n2 < n1){
        t = n1 - n2 - 1;

        if ((t % 2) == 0)
        return (t / 2) * (n1 + n2);

        if ((t % 2) != 0)
        return ((t + 1)/ 2) * (n1 + n2);
    }
    if (n1 = n2){
        return 0;
    }   
}

/18

#include <stdio.h>

int resultado(int x, int z);

int main(){
    int n1, n2;
    printf ("Apresente dois valores:\n");
    scanf ("%d %d", &n1, &n2);
    printf ("O resultado do primeiro numero elevado ao segundo numero eh:%d\n", resultado(n1, n2)); 

system("pause");
return 0;
}

int resultado (int x, int z){  
    int pot = 1; 
    int cont = 0;
    for (cont = 0; cont < z; cont++){
        pot = pot * x;
    } 
return pot; 
}

/19

#include <stdio.h>
#include <math.h>

int fatorial (int n);

int main (){
    int n;

    printf("Apresente um numero para fatorar:\n");
    scanf("%d", &n);

    printf("O fatorial desse n eh:%d\n", fatorial(n)); 


system("pause");
return 0;
}

int fatorial (int n){
    int i, p = 1; 

    for (i=2; i<=n; i++){
        p = p * i; 
    }
    return p; 
}

/20

#include <stdio.h>
#include <math.h>

int primo (int nd);

int main(){
    int nd, y;
    printf("Digite um numero diferente de 0 e 1, e em seguida sera apresentado os numeros primos ate ele:\n");
    scanf("%d", &nd);

    if (nd == 0 || nd == 1){
        printf("INVALIDO\n");
    }

    y = primo (nd);

system("pause");
return 0;
}

int primo (int nd){
    int n = 2, r = 0, c = 0, d = 0, s = 0;
    while (n <= nd){
        for (c = 2; c < n; c++){
            r = 0;                     
            d = n % c;
            if (d == 0){
                r++;
            break;
            }
        }
            if (r == 1){
                printf("");
            }
            if (r == 0){
            printf("%d\n", n);
            s = s + n;
            }
            n++;
    }
return s;
}

/21

#include <stdio.h>
#include <math.h>

int piramide (int x);

int main(){
    int x;
    printf("Digite a quantidade de linhas que voce quer impimir !\n");
    scanf("%d", &x);

    piramide (x);
    
system("pause");
return 0;
}

int piramide (int x){
    int c, ex;
    for (c = 1; c <= x; c++){
        for (ex = 1; ex <= c; ex++){
            printf("!");
        }
        printf("\n");
    }
}


/22

#include <stdio.h>

int triangulo (int h);

int main(){
    int h;
    printf("Digite a altura do triangulo deve ter:\n");
    scanf("%d", &h);

    triangulo (h);

system("pause");
return 0;
}

int triangulo (int h){
    for(int i = 1; i <= h; i++){
        for(int x = i; x > 0; x--)
            printf("!");
        
        printf("\n");
    }

    for(int i = h-1; i >= 1; i--){
        for(int x = i; x > 0; x--)
            printf("!");
        
        printf("\n");
    }
}

/23

#include <stdio.h>
#include <math.h>

int loop (int x);

int main (){
    int x;
    scanf("%d", &x);
    loop(x);

system("pause");
return 0;
}

int loop (int x){
    int l, a, b;
    for (l = 1; l <= x; l++){
        for (a = 1; a <= (l * 2 - 1); a++){
            for (b = l; b < x; b++){
                if (a == 1){
                    printf(" ");
                }
            }
            printf("*");
        }
        printf("\n");
    }
}
