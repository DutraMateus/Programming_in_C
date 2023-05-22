// Segunda etapa: editar usuarios
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int i = 0;

int idUser()
{
    return rand();
}
void Cadastro(char NomeCompleto[][40], char email[][30], char sexo[][10], char endereco[][50], double *altura, int vacina[], int id[])
{
    printf("\nInforme o NOME do usuario: ");
    fgets(NomeCompleto[i], 40, stdin);
    fflush(stdin);

    getchar();

    do
    {
        printf("\nInforme o EMAIL do usuario: ");
        fgets(email[i], 30, stdin);
        fflush(stdin);
    } while (strchr(email[i], '@') == 0);

    do
    {
        printf("\nInforme o SEXO do usuario: ");
        fgets(sexo[i], 10, stdin);
        fflush(stdin);
    } while (strchr(sexo[i], 'feminino') != 0 && strchr(sexo[i], 'masculino') != 0 && strchr(sexo[i], 'outros') != 0);

    printf("\nInforme o ENDERECO do usuario: ");
    fgets(endereco[i], 50, stdin);
    fflush(stdin);

    do
    {
        printf("\nInforme o ALTURA(metros) do usuario: ");
        scanf("%lf", &altura[i]);
        fflush(stdin);
    } while (altura[i] < 1 || altura[i] > 2);

    do
    {
        printf("\nInfome se o usuario foi ou nao VACINADO(1 - sim) (0 - nao): ");
        scanf("%d", &vacina[i]);
        fflush(stdin);
    } while (vacina[i] != 1 && vacina[i] != 0);

    id[i] = idUser();
    printf("\nUsuario criado com id: %d", id[i]);

    i++;

    return 1;
}
void EditarCadastro(char NomeCompleto[][40], char email[][30], char sexo[][10], char endereco[][50], double *altura, int vacina[], int id[])
{
    int i, idProcurar, opcao;

    printf("\tInforme o id do usuario, cujo, deseja realizar alteracoes:\n");
    scanf("%d", &idProcurar);
    fflush(stdin);
    int index;

    for (i = 0; i < 1000; i++)
    {
        if (id[i] == idProcurar)
        {
            index = i;
            break;
        }
    }
    printf("\tInforme qual dado deseja alterar: ");
    printf("\n1 - Nome\n2 - Email\n3 - Sexo\n4 - Endereco\n5 - Altura\n6 - Vacina\n");
    scanf("%d", &opcao);
    fflush(stdin);
    switch (opcao)
    {
    case 1:
        printf("\nInforme o Nome correto: ");
        fgets(NomeCompleto[index], 40, stdin);
        break;
    case 2:
        printf("\nInforme o Email correto: ");
        fgets(email[index], 30, stdin);
        break;
    case 3:
        printf("\nInforme o Sexo correto: ");
        fgets(sexo[index], 10, stdin);
        break;
    case 4:
        printf("\nInforme o Endereco correto: ");
        fgets(endereco[index], 50, stdin);
        break;
    case 5:
        printf("\nInforme a Altura correta: ");
        scanf("%lf", &altura);
        break;
    case 6:
        printf("\nInforme o status correto da Vacina: ");
        scanf("%d", &vacina);
        break;
    default:
        printf("\nInforme uma opcao que seja valida!");
    }
    return 1;
}

int main()
{
    srand(time(NULL));
    char NomeCompleto[1000][40], email[1000][30], sexo[1000][10], endereco[1000][50];
    int vacina[1000], id[1000], opcao, continuar;
    double altura[1000];

    do
    {

        printf("\tSeja bem vindo!\n\n");
        printf("\nInforme o que deseja realizar no programa:\n\n1 - Incluir usuarios\n2 - Editar usuarios\n");
        scanf("%d", &opcao);
        switch (opcao)
        {
        case 1:
            Cadastro(NomeCompleto, email, sexo, endereco, altura, vacina, id);
            break;
        case 2:
            EditarCadastro(NomeCompleto, email, sexo, endereco, altura, vacina, id);
            break;
        }
    } while (continuar);
    return 0;
}
