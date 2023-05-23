//Sexta etapa: Backup dos usuarios
/*Ao que tudo indica deu certo*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

int numUsuarios = 0;

int idUser()
{
    return rand();
}
void Cadastro(char NomeCompleto[][40], char email[][30], char sexo[][10], char endereco[][50], double *altura, int vacina[], int id[])
{
    printf("\nInforme o NOME do usuario: ");
    fgets(NomeCompleto[numUsuarios], 40, stdin);
    fflush(stdin);

    getchar();

    do
    {
        printf("\nInforme o EMAIL do usuario: ");
        fgets(email[numUsuarios], 30, stdin);
        fflush(stdin);
    } while (strchr(email[numUsuarios], '@') == 0);

    do
    {
        printf("\nInforme o SEXO do usuario: ");
        fgets(sexo[numUsuarios], 10, stdin);
        fflush(stdin);
    } while (strchr(sexo[numUsuarios], 'feminino') == 0 && strchr(sexo[numUsuarios], 'masculino') == 0 && strchr(sexo[numUsuarios], 'outros') == 0);

    printf("\nInforme o ENDERECO do usuario: ");
    fgets(endereco[numUsuarios], 50, stdin);
    fflush(stdin);

    do
    {
        printf("\nInforme o ALTURA(metros) do usuario: ");
        scanf("%lf", &altura[numUsuarios]);
        fflush(stdin);
    } while (altura[numUsuarios] < 1 || altura[numUsuarios] > 2);

    do
    {
        printf("\nInfome se o usuario foi ou nao VACINADO(1 - sim) (0 - nao): ");
        scanf("%d", &vacina[numUsuarios]);
        fflush(stdin);
    } while (vacina[numUsuarios] != 1 && vacina[numUsuarios] != 0);

    id[numUsuarios] = idUser();
    printf("\nUsuario criado com id: %d\n\n", id[numUsuarios]);

    numUsuarios++;

    return 1;
}
void EditarCadastro(char NomeCompleto[][40], char email[][30], char sexo[][10], char endereco[][50], double *altura, int vacina[], int id[])
{
    int i, idProcurar, opcao;

    printf("\tInforme o id do usuario, cujo, deseja realizar alteracoes:\n");
    scanf("%d", &idProcurar);
    fflush(stdin);
    int index;

    for (int i = 0; i < numUsuarios; i++)
    {
        if (id[numUsuarios] == idProcurar)
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
void ExcluirUsuario(char NomeCompleto[][40], char email[][30], char sexo[][10], char endereco[][50], double *altura, int vacina[], int id[])
{
    int idProcurar;
    bool encontrar = false;

    printf("\nInforme o id do usuario que deseja remover:\n");
    scanf("%d", &idProcurar);

    for (int i = 0; i < numUsuarios; i++)
    {
        if (idProcurar == id[i])
        {
            encontrar = true;
            break;
        }
    }
    if (!encontrar)
    {
        printf("Usuario %d nao encontrado.\n", idProcurar);
        return 1;
    }
    for (int j = 0; j < numUsuarios; j++)
    {
        strcpy(NomeCompleto[j], NomeCompleto[j + 1]);
        strcpy(email[j], email[j + 1]);
        strcpy(sexo[j], sexo[j + 1]);
        strcpy(endereco[j], endereco[j + 1]);
        altura[j] = altura[j + 1];
        vacina[j] = vacina[j + 1];
        id[j] = id[j + 1];
    }
    strcpy(NomeCompleto[numUsuarios - 1], "");
    strcpy(email[numUsuarios - 1], "");
    strcpy(sexo[numUsuarios - 1], "");
    strcpy(endereco[numUsuarios - 1], "");
    altura[numUsuarios - 1] = 0.0;
    vacina[numUsuarios - 1] = 0;
    id[numUsuarios - 1] = 0;

    numUsuarios--;

    printf("Usuario %d excluido!\n", idProcurar);

    return 1;
}
// erro
void BuscaEmail(char NomeCompleto[][40], char email[][30], char sexo[][10], char endereco[][50], double *altura, int vacina[], int id[])
{
    char emailBusca[30];
    int index = -1;

    printf("\nInforme o email do usuario que deseja encontrar:\n");
    fgets(emailBusca, 30, stdin);
    fflush(stdin);

    getchar();

    for (int i = 0; i < numUsuarios; i++)
    {
        if (strcmp(emailBusca, email[i]) == 0)
        {
            index = i;
            break;
        }
    }

    if (index != -1)
    {
        printf("\nDados do usuario encontrado:\n");
        printf("Nome completo: %s\n", NomeCompleto[index]);
        printf("Email: %s\n", email[index]);
        printf("Sexo: %s\n", sexo[index]);
        printf("Endereco: %s\n", endereco[index]);
        printf("Altura: %.2lf\n", altura[index]);
        printf("Vacina: %d\n", vacina[index]);
    }
    else
    {
        printf("\nUsuario com o email %s nao encontrado.\n", emailBusca);
    }
}
// erro
void ImprimirUsuarios(char NomeCompleto[][40], char email[][30], char sexo[][10], char endereco[][50], double *altura, int vacina[], int id[])
{

    int usuarios;

    for (int i = 0; i < numUsuarios; i++)
    {
        printf("\nUsuario: %d\n", id[i]);
        printf("\nNome completo: %s", NomeCompleto[i]);
        printf("\nEmail: %s", email[i]);
        printf("\nSexo: %s", sexo[i]);
        printf("\nEndereco: %s", endereco[i]);
        printf("\nAltura: %.2lf\n", altura[i]);
        printf("\nVacina: %s\n", vacina[i]);
    }
}
void BackupUsuario(char NomeCompleto[][40], char email[][30], char sexo[][10], char endereco[][50], double *altura, int vacina[], int id[], char backupNomeCompleto[][40], char backupEmail[][30], char backupSexo[][10], char backupEndereco[][50], double *backupAltura, int backupVacina[])
{

    for (int i = 0; i < numUsuarios; i++)
    {
        strcpy(backupNomeCompleto[numUsuarios], NomeCompleto[numUsuarios]);
        strcpy(backupEmail[numUsuarios], email[numUsuarios]);
        strcpy(backupSexo[numUsuarios], sexo[numUsuarios]);
        strcpy(backupEndereco[numUsuarios], endereco[numUsuarios]);
        backupAltura[i] = altura[i];
        backupVacina[i] = vacina[i];
    }
    printf("\nBackup concluido!:)\n\n");
}
int main()
{
    srand(time(NULL));
    char NomeCompleto[1000][40], email[1000][30], sexo[1000][10], endereco[1000][50], backupNomeCompleto[1000][40], backupEmail[1000][30], backupSexo[1000][10], backupEndereco[1000][50];
    int vacina[1000], id[1000], opcao, continuar, backupVacina[1000];
    double altura[1000], backupAltura[1000];

    do
    {

        printf("\tSeja bem vindo ao menu!\n\n");
        printf("\nInforme o que deseja realizar no programa:\n\n1 - Incluir usuarios\n2 - Editar usuarios\n3 - Excluir usuario\n4 - Econtrar usuario pelo email\n5 - Apresentar usuarios\n6 - Fazer backup dos usuarios\n\n");
        scanf("%d", &opcao);
        switch (opcao)
        {
        case 1:
            Cadastro(NomeCompleto, email, sexo, endereco, altura, vacina, id);
            break;
        case 2:
            EditarCadastro(NomeCompleto, email, sexo, endereco, altura, vacina, id);
            break;
        case 3:
            ExcluirUsuario(NomeCompleto, email, sexo, endereco, altura, vacina, id);
            break;
        case 4:
            BuscaEmail(NomeCompleto, email, sexo, endereco, altura, vacina, id);
            break;
        case 5:
            ImprimirUsuarios(NomeCompleto, email, sexo, endereco, altura, vacina, id);
            break;
        case 6:
            BackupUsuario(NomeCompleto, email, sexo, endereco, altura, vacina, id, backupNomeCompleto, backupEmail, backupSexo, backupEndereco, backupAltura, backupVacina);
            break;
        }

    } while (continuar);
    return 0;
}
