#include <stdio.h>
#include <stdlib.h>

void limpar_buffer(void)
{
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

int main(void){

    int tamanho = 2;
    float homens = 0;
    float mulheres = 0;

    char *pessoas = (char*) malloc(tamanho *sizeof(char));
    int *opcao = (int*) malloc(tamanho *sizeof(int));

    if (pessoas == NULL || opcao == NULL)
    {
    printf("Erro ao alocar memoria");
    exit(1);
    }

    for (int i = 0; i < tamanho; i++)
    {
        printf("Digite o seu genero: M/f\n");
        scanf("%c", &pessoas[i]);
        limpar_buffer();
        printf("Sua opinião sobre o produto: 1 para gostou e 2 para não gostou:\n");
        scanf("%d", &opcao[i]);
        limpar_buffer();

        if (pessoas[i] == 'm'|| pessoas[i] == 'M' && opcao[i] == 2)
        {
            homens++;
        }

        if (pessoas[i] == 'f'|| pessoas[i]== 'F' && opcao[i] == 1)
        {
            mulheres++;
        }         
    }

    printf("A porcentagem das mulheres que gostou do produto é:%.0f%%\n", (mulheres/10)*100);
    printf("A porcentagem das homens que não gostou do produto é:%.0f%%\n", (homens/10)*100);

    free(pessoas);
    free(opcao);

}