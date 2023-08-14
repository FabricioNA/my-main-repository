#include <stdio.h>
#include <stdlib.h>

#define CLIENTES_MAX 100
#define TAMANHO_MAX 100

typedef struct Cliente{
    char nome[50];
    int idade;
    char sexo[20];
    char endereco[25];
}Dados;

typedef struct Pessoa{	
    char logradouro[20];
    char bairro[20];
    char cidade[20];
    char UF[20];
}Endereco;

int i = 0, numChoose;

Dados dados[CLIENTES_MAX];
Endereco endereco[CLIENTES_MAX];

int t = 1;

void receaveText(char dest[]){
    fgets(dest, TAMANHO_MAX, stdin);
    dest[strcspn(dest, "\n")] = '\0';
    setbuf(stdin, 0);
}

void Cadastro(){
    int resposta;

    cadastronov:

        system("cls");
        setbuf(stdin, 0);

        printf("Informe seu nome:\n");
        receaveText(dados[i].nome);

        printf("Sua idade:\n");
        scanf("%i", &dados[i].idade);
        setbuf(stdin, 0);

        printf("Informe o sexo:\n");
        receaveText(dados[i].sexo);

        printf("Endereco:\n");
        receaveText(dados[i].endereco);

        printf("Informe o logradouro:\n");
        receaveText(endereco[i].logradouro);

        printf("Bairro:\n");
        receaveText(endereco[i].bairro);

        printf("Informe a Cidade:\n");
        receaveText(endereco[i].cidade);

        printf("Estado(UF):\n");
        receaveText(endereco[i].UF);

        system("cls");

        printf("\a----- Cadastro concluido com sucesso -----\n");
        printf("Deseja realizar um novo cadastro ?\n\n");
        printf("[1]-Sim [outro numero]-Nao\n");
        printf("------------------------------------------\n");

        printf("\nInforme sua resposta:\n");
        scanf("%i", &resposta);

        if (resposta == 1){
        resposta = 0;
        i++;
        t++;
        setbuf(stdin, 0);
        goto cadastronov;
        }
        
    }

void Exibir(){
    system("cls");
    int j = i + 1, k = 0;

    printf("---------- Lista de clientes -------------\n");
    printf("------------ %i Cadastrados ----------------\n", j);
    while (k < j)
    {
        printf("------------------------------------------\n");
        printf("Nome: %s\n", dados[k].nome);
        printf("Idade: %i\n", dados[k].idade);
        printf("Sexo: %s\n", dados[k].sexo);
        printf("Endereco: %s\n", dados[k].endereco);
        printf("Logradouro: %s\n", endereco[k].logradouro);
        printf("Bairro: %s\n", endereco[k].bairro);
        printf("Cidade: %s\n", endereco[k].cidade);
        printf("Estado(UF): %s\n", endereco[k].UF);
        printf("------------------------------------------\n");
        k++;
    }
    system("pause");
}

void Salvar(){
    FILE *arquivo;
    int j = i + 1, k = 0;
    arquivo = fopen("registro_clientes.csv", "w");

    if (arquivo == NULL) {
        printf("Não foi possível criar o arquivo.\n");
        system("pause");
    }else{
        fprintf(arquivo, "Nome;Idade;Sexo;Endereco;Logradouro;Bairro;Cidade;Estado(UF)\n");
        while (k < j)
        {
            fprintf(arquivo, "%s;%i;%s;%s;%s;%s;%s;%s;\n", dados[k].nome, dados[k].idade, dados[k].sexo, 
            dados[k].endereco, endereco[k].logradouro, endereco[k].bairro, endereco[k].cidade, endereco[k].UF);
            k++;
        }
        fclose(arquivo);
        printf("Arquivo Criado!\n");
        system("pause");
    }
}

void Ler(){
    char *line[TAMANHO_MAX];
    char *ptr;
    FILE *arquivo;

    system("cls");
    arquivo = fopen("registro_clientes.csv", "r");
    while (EOF != fscanf(arquivo, "%[^\n]\n", line))
    {
        ptr = strtok(line, ";");
        while (ptr != NULL)
        {   
            printf("%s ", ptr);
            ptr = strtok(NULL, ";");
        }
        printf("\n");
    }

    fclose(arquivo);
    printf("Arquivo Lido! Clique para continuar\n");
    system("pause");

}

int main(){
    while (1)
    {
        system("cls");
        setbuf(stdin, 0);
        numChoose = 0;
         printf("------- Autor: FNA -- 17/01/2023 --------\n");
        printf("\a---- Sistema de Cadastro de Clientes ----\n");
        printf(" 1-Efetuar cadastro\n");
        printf(" 2-Exibir Clientes\n");
        printf(" 3-Salvar em arquivo\n");
        printf(" 4-Ler arquivo\n");
        printf(" 5-Sair\n");
        printf("-----------------------------------------\n\n");
        printf("\nEscolha uma opcao:\n");
        scanf("%i", &numChoose);

        switch (numChoose)
        {
        case 1:
            Cadastro();
            break;
        case 2:
            Exibir();
            break;
        case 3:
            Salvar();
            break;
        case 4:
            Ler();
            break;
        default:
            return 0;
        }
    }
}