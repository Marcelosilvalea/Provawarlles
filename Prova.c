#include <stdio.h>
int main() {
    int N; 
    int contador = 1;
    const int LIMITE_MAXIMO = 21; 

    printf("Digite o número de linhas (N) para o Triângulo de Floyd (máximo %d): ", LIMITE_MAXIMO);
    scanf("%d", &N);

    if (N <= 0) {
        printf("Por favor, digite um número inteiro positivo.\n");
        return 1; 
    } else if (N > LIMITE_MAXIMO) {
        printf("O número de linhas não pode exceder %d.\n", LIMITE_MAXIMO);
        return 1; 
    }

    printf("\n--- Triângulo de Floyd com %d linhas ---\n", N);

    
    for (int i = 1; i <= N; i++) {
        
        for (int j = 1; j <= i; j++) {
            printf("%d", contador); 
            contador++; 
            if (j < i) {
                printf(" ");
            }
        }
        printf("\n"); 
    }

    return 0;
 #include <stdio.h>

int main() {
    int n, i, num;
    int maior = 0;
    int contador = 0;


    printf("Digite a quantidade de números a serem lidos: ");
    scanf("%d", &n);


    for (i = 0; i < n; i++) {
        printf("Digite o número %d: ", i + 1);
        scanf("%d", &num);

        if (num > maior) {
            maior = num;
            contador = 1;
        } else if (num == maior) {
            contador++; 
        }
    }

 
    printf("O maior número é: %d\n", maior);
    printf("O maior número foi lido %d vez(es).\n", contador);

    return 0;
}
 #include <stdio.h>

int main() {
    float velocidade;

    printf("Digite a velocidade que você costuma dirigir (em km/h): ");
    scanf("%f", &velocidade);

    if (velocidade > 75) {
        printf("Você está acima do limite de velocidade! Multa alta.\n");
    } else if (velocidade > 65) {
        printf("Você está acima do limite de velocidade! Multa média.\n");
    } else if (velocidade > 55) {
        printf("Você está acima do limite de velocidade! Multa baixa.\n");
    } else if (velocidade > 45) {
        printf("Você está dentro do limite de velocidade.\n");
    } else {
        printf("Você está abaixo do limite de velocidade. Bom trabalho!\n");
    }

    return 0;
}
 #include <stdio.h>

int main() {
    char operacao; 
    float num1, num2; 

    
    printf("Escolha uma operacao:\n");
    printf("Soma (+), Subtracao (-), Multiplicacao (*), Divisao (/), Resto da divisao (%%)\n");
    printf("Digite a operacao desejada: ");
    scanf(" %c", &operacao);

   
    printf("Digite dois numeros: ");
    scanf("%f %f", &num1, &num2);

   
    switch (operacao) {
        case '+':
            printf(" %.2f + %.2f = %.2f\n", num1, num2, num1 + num2);
            break; 
        case '-':
            printf(" %.2f - %.2f = %.2f\n", num1, num2, num1 - num2);
            break;

        case '*':
            printf(" %.2f * %.2f = %.2f\n", num1, num2, num1 * num2);
            break;

        case '/':
           
            if (num2 == 0) {
                printf("Erro: Divisao por zero nao permitida!\n");
            } else {
                printf(" %.2f / %.2f = %.2f\n", num1, num2, num1 / num2);
            }
            break;

        case '%':

            if ((int)num2 == 0) { 
                printf("Erro: Divisao por zero nao permitida!\n");
            } else {
                printf("Resto da divisao de %.2f por %.2f = %d\n", num1, num2, (int)num1 % (int)num2);
            }
            break;

        default:

            printf("Operacao invalida!\n");
            break;
    }

    return 0;
}
