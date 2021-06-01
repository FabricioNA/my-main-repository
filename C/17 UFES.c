#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include <string.h>

int main()
{
    int i;
    char cond_parar;
    struct cadas_func
    {
        char nome[51];
        int cargo;
        int salario;
        int novo_salario;
    }
    func[100];
    fflush(stdin);
    for ( i=0, cond_parar=0; i<=100; i++)
    {
        system("cls");
        printf ("~~Cadastro Reajuste Salarial~~\n");
        printf ("Seu nome:\n");
        fgets(func[i].nome,51,stdin);
        printf ("Codigo do seu cargo:\n");
        scanf ("%i", &func[i].cargo);
        printf ("Seu salario atual:\n");
        scanf ("%i", &func[i].salario);
        printf ("Deseja fazer o reajuste? Se sim, digite: 0, se nao digite: 1\n");
        scanf ("%i", &cond_parar);
        if (cond_parar != 1)
        {
            break;
        }
    }
        for (i=0; i<=100; i++)
        {
            switch (func[i].cargo)
            {
            case 101:
                system("cls");
                printf ("~~Cadastro Reajuste Salarial~~\n");
                printf ("%s\\n Seu salario se mantem o mesmo: %i\n", func[i].nome, func[i].salario);
            case 102:
                system("cls");
                printf ("~~Cadastro Reajuste Salarial~~\n");
                func[i].novo_salario = func[i].salario * 0.5;
                func[i].novo_salario += func[i].salario;
                printf ("%i", func[i].novo_salario);
            default:
                break;
            }
        }
return 0;
}
