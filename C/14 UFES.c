#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

/*Construir um codigo capaz de armazenar em struct com dados de nome cargo salario e o novo salario referente a funcionarios
dessa forma criando um cadastro que na qual ficara disposto ao usuario digitar e encontrar seu nome e seu novo salario.*/

// Struct dos funcionarios
typedef struct cadas_func
    {
        char nome[51];
        int cargo;
        int id;
        float salario;
        float novo_salario;
    }
    Cfunc;
int main()
{
    // Variaveis
    int i, MaxF;
    int reqfunc;
    Cfunc func[100];

    // Qts funcionarios
    printf ("~~Reajuste Salarial~~\n");
    printf ("Quantos funcionarios serao cadastrados? MAX:100\n");
    scanf ("%i", &MaxF); 
    
    // Cadastro do funcionario
    for ( i = 0 ; i <= MaxF ; i++)
    {
        system("cls");
        printf ("~~Cadastro Reajuste Salarial~~\n");
        fflush(stdin);
        printf ("Seu nome:\n");
        fgets(func[i].nome,51,stdin);
        func[i].nome[strlen(func[i].nome)-1] = '\0';
        printf ("Sua Identificacao Nominal:");
        scanf ("%i", &func[i].id);
        printf ("Codigo do seu cargo:\n");
        scanf ("%i", &func[i].cargo);
        printf ("Seu salario atual:\n");
        scanf ("%f", &func[i].salario);
    }
    // Reajuste salarial
    //Busca de cadastro

    for ( i = 0 ; i <= MaxF ; i++){
        system("cls");
        printf ("~~Seu Reajuste Salarial~~\n");
        printf ("Digite seu nome para ver seu reajuste:\n");
        scanf ("%i", &reqfunc);
        if (reqfunc == func[i].id)
        {
            printf("seu salario eh: %i", func[i]);
        }
    }
        /*
        switch (func[i].cargo)
        {
            case 101:
                continue;
            case 102:
                func[i].novo_salario = func[i].salario * 0.005;
                func[i].novo_salario += func[i].salario;
                printf ("Apos o reajuste seu salario entao sera de: %.2f\n", func[i].novo_salario);
            case 103:
                func[i].novo_salario = func[i].salario * 0.015;
                func[i].novo_salario += func[i].salario;
                printf ("Apos o reajuste seu salario entao sera de: %.2f\n", func[i].novo_salario);
            case 104:
                func[i].novo_salario = func[i].salario * 0.015;
                func[i].novo_salario += func[i].salario;
                printf ("Apos o reajuste seu salario entao sera de: %.2f\n", func[i].novo_salario);
            default:
                func[i].novo_salario = func[i].salario * 0.4;
                func[i].novo_salario += func[i].salario;
                printf ("Apos o reajuste seu salario entao sera de: %.2f, porem seu cargo eh inexistente. Favor repassar ao RH\n", func[i].novo_salario);
        }
    }
    */
  
   
                
    system("pause");
    return 0;
}
