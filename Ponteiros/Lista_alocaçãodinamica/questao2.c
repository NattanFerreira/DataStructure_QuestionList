#include <stdio.h>
#include <stdlib.h>

void limpar_buffer(void){
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

int calcular_nota(int tamanho, int acertos){
    return 10/tamanho;
}

int main(void){
int tamanho;
int *alunos = (int*) malloc(10*(sizeof(int)));

    if (alunos == NULL){
        printf("erro na alocação");
        exit(1);
    }

printf("Crie a prova:\n");
printf("Digite o numero de questões: \n");
scanf("%d", &tamanho);

char *questoes = (char*) malloc(tamanho*(sizeof(char)));

    if (questoes == NULL){
        printf("erro na alocação");
        exit(1);
    }
    
    for (int i = 0; i < tamanho; i++)
    {
        printf("Digite o gabarito da %d questão\n", i+1);
        scanf("%c", &questoes[i]);
    }

    printf("Registro das Respostas:\n ");

    for(int i = 0; i<tamanho; i++){
        
    }
    return 0;
}//imcompleta