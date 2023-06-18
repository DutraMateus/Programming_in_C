#include <stdio.h>
#include <string.h>

int numUsuarios = 0;

int idUser()
{
    return rand();
}
int numeroUsuarios = 0;

typedef struct
{
    int id, vacina;
    char nomeCompleto[40], email[30], sexo[10], endereco[50];
    double altura;
} infoUsuario;
infoUsuario usuario[1000];

void Cadastro()
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
void EditarCadastro()
{
    int i, idProcurar, opcao;

    printf("\tInforme o id do usuario, cujo, deseja realizar alteracoes:\n");
    scanf("%d", &idProcurar);
    fflush(stdin);
    int index;

    for (int i = 0; i < numUsuarios; i++)
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
            Cadastro(usuario);
            break;
        case 2:
            EditarCadastro(usuario);
            break;
            // case 3:
            //     ExcluirUsuario(usuario);
            //     break;
            // case 4:
            //     BuscaEmail(usuario);
            //     break;
            // case 5:
            //     ImprimirUsuarios(usuario);
            //     break;
            // case 6:
            //     BackupUsuario(usuario, backupNomeCompleto, backupEmail, backupSexo, backupEndereco, backupAltura, backupVacina);
            //     break;
            // case 7:
            //     RestararDadosUsuarios(usuario, backupNomeCompleto, backupEmail, backupSexo, backupEndereco, backupAltura, backupVacina);
            //     break;
            // default:
            //     printf("\nSelecione uma das opcoes informadas (1 a 6)");
            // }
        }
    } while (continuar);
    return 0;
}
