#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

int numeroUsuarios = 0;

int idUser()
{
    return rand();
}

typedef struct
{
    int id, vacina;
    char nomeCompleto[40], email[30], sexo[10], endereco[50];
    double altura;
} infoUsuario;
infoUsuario usuario[1000];

typedef struct
{
    int id, vacina;
    char nomeCompleto[40], email[30], sexo[10], endereco[50];
    double altura;
} backup;
backup backupUsuarios[1000];


void cadastro()
{
    printf("\nInforme o NOME do usuario: ");
    fgets(usuario[numeroUsuarios].nomeCompleto, 40, stdin);
    fflush(stdin);

    getchar();

    do
    {
        printf("\nInforme o EMAIL do usuario: ");
        fgets(usuario[numeroUsuarios].email, 30, stdin);
        fflush(stdin);
    } while (strchr(usuario[numeroUsuarios].email, '@') == 0);
    do
    {
        printf("\nInforme o SEXO do usuario: ");
        fgets(usuario[numeroUsuarios].sexo, 10, stdin);
        fflush(stdin);
    } while (strchr(usuario[numeroUsuarios].sexo, 'feminino') == 0 && strchr(usuario[numeroUsuarios].sexo, 'masculino') == 0 && strchr(usuario[numeroUsuarios].sexo, 'outros') == 0);

    printf("\nInforme o ENDERECO do usuario: ");
    fgets(usuario[numeroUsuarios].endereco, 50, stdin);
    fflush(stdin);

    do
    {
        printf("\nInforme o ALTURA(metros) do usuario: ");
        scanf("%lf", &usuario[numeroUsuarios].altura);
        fflush(stdin);
    } while (usuario[numeroUsuarios].altura < 1 || usuario[numeroUsuarios].altura > 2);

    do
    {
        printf("\nInfome se o usuario foi ou nao VACINADO(1 - sim) (0 - nao): ");
        scanf("%d", &usuario[numeroUsuarios].vacina);
        fflush(stdin);
    } while (usuario[numeroUsuarios].vacina != 1 && usuario[numeroUsuarios].vacina != 0);

    usuario[numeroUsuarios].id = idUser();
    printf("\nUsuario criado com id: %d\n\n", usuario[numeroUsuarios].id);

    numeroUsuarios++;
    return;
}
void editarCadastro()
{
    int i, idProcurar, opcao;

    printf("\tInforme o id do usuario, cujo, deseja realizar alteracoes:\n");
    scanf("%d", &idProcurar);
    fflush(stdin);
    int index;

    for (int i = 0; i < numeroUsuarios; i++)
    {
        if (usuario[numeroUsuarios].id == idProcurar)
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
        fgets(usuario[index].nomeCompleto, 40, stdin);
        break;
    case 2:
        printf("\nInforme o Email correto: ");
        fgets(usuario[index].email, 30, stdin);
        break;
    case 3:
        printf("\nInforme o Sexo correto: ");
        fgets(usuario[index].sexo, 10, stdin);
        break;
    case 4:
        printf("\nInforme o Endereco correto: ");
        fgets(usuario[index].endereco, 50, stdin);
        break;
    case 5:
        printf("\nInforme a Altura correta: ");
        scanf("%lf", &usuario[index].altura);
        break;
    case 6:
        printf("\nInforme o status correto da Vacina: ");
        scanf("%d", &usuario[index].vacina);
        break;
    default:
        printf("\nInforme uma opcao que seja valida!");
    }
    return;
}
void excluirUsuario()
{
    int idProcurar;
    bool encontrar = false;
    int index;

    printf("\nInforme o id do usuario que deseja remover:\n");
    scanf("%d", &idProcurar);

    for (int i = 0; i < numeroUsuarios; i++)
    {
        if (idProcurar == usuario[i].id)
        {
            encontrar = true;
            index = i;
            break;
        }
    }
    if (!encontrar)
    {
        printf("Usuario %d nao encontrado.\n", idProcurar);
        return;
    }

    for (int i = index; i < numeroUsuarios - 1; i++)
    {
        usuario[i] = usuario[i + 1];
    }
    numeroUsuarios--;

    printf("Usuario %d excluido!\n", idProcurar);

    return;
}
void buscaEmail() /*ERRO*/
{
    char emailBusca[30];
    int index = -1;

    printf("\nInforme o email do usuario que deseja encontrar:\n");
    fgets(emailBusca, 30, stdin);
    fflush(stdin);

    getchar();

    for (int i = 0; i < numeroUsuarios; i++)
    {
        if (strcmp(emailBusca, usuario[i].email) == 0)
        {
            index = i;
            break;
        }
    }

    if (index != -1)
    {
        printf("\nDados do usuario encontrado:\n");
        printf("Nome completo: %s\n", usuario[index].nomeCompleto);
        printf("Email: %s\n", usuario[index].email);
        printf("Sexo: %s\n", usuario[index].sexo);
        printf("Endereco: %s\n", usuario[index].endereco);
        printf("Altura: %.2lf\n", usuario[index].altura);
        printf("Vacina: %d\n", usuario[index].vacina);
        printf("ID: %d", usuario[index].id);
    }
    else
    {
        printf("\nUsuario com o email %s nao encontrado.\n", emailBusca);
    }

    return;
}
void imprimirUsuario() /*ERRO: NAO IMPRIME NOME COMPLETO*/
{

    for (int i = 0; i < numeroUsuarios; i++)
    {
        printf("\nID: %d\n", usuario[i].id);
        printf("\nNome completo: %s", usuario[i].nomeCompleto);
        printf("\nEmail: %s", usuario[i].email);
        printf("\nSexo: %s", usuario[i].sexo);
        printf("\nEndereco: %s", usuario[i].endereco);
        printf("\nAltura: %.2lf\n", usuario[i].altura);
        printf("\nVacina: %d\n", usuario[i].vacina);
    }

    return;
}
void backupUsuario()
{
    for (int i = 0; i < numeroUsuarios; i++)
    {
        backupUsuarios[i].id = usuario[i].id;
        backupUsuarios[i].vacina = usuario[i].vacina;
        strcpy(backupUsuarios[i].nomeCompleto, usuario[i].nomeCompleto);
        strcpy(backupUsuarios[i].email, usuario[i].email);
        strcpy(backupUsuarios[i].sexo, usuario[i].sexo);
        strcpy(backupUsuarios[i].endereco, usuario[i].endereco);
        backupUsuarios[i].altura = usuario[i].altura;
    }

    printf("\nBackup concluido!\n\n");
    return;
}

int main()
{
    srand(time(NULL));
    int opcao, continuar;

    do
    {

        printf("->\tSeja bem vindo ao menu!<-\n\n");
        printf("\nInforme o que deseja realizar no programa:\n\n1 - Incluir usuarios\n2 - Editar usuarios\n3 - Excluir usuario\n4 - Econtrar usuario pelo email\n5 - Apresentar usuarios\n6 - Fazer backup dos usuarios\n7 - Restaurar os dados\n\n");
        scanf("%d", &opcao);
        switch (opcao)
        {
        case 1:
            cadastro();
            break;
        case 2:
            editarCadastro();
            break;
        case 3:
            excluirUsuario();
            break;
        case 4:
            buscaEmail();
            break;
        case 5:
            imprimirUsuario();
            break;
        case 6:
            backupUsuario();
            break;
            // case 7:
            //     RestararDadosUsuarios(usuario, backupNomeCompleto, backupEmail, backupSexo, backupEndereco, backupAltura, backupVacina);
            //     break;
            // default:
            //     printf("\nSelecione uma das opcoes informadas (1 a 6)");
            // }
        }
    } while (continuar != 8);
    return 0;
}
