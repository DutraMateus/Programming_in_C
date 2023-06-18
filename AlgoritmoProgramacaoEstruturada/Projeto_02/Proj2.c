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
    char NomeCompleto[40], email[30], sexo[10], endereco[50];
    double altura;
} infoUsuario;
infoUsuario usuario[1000];

void Cadastro()
{
    printf("\nInforme o NOME do usuario: ");
    fgets(usuario[numeroUsuarios].NomeCompleto, 40, stdin);
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
    return 1;
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
            // case 2:
            //     EditarCadastro(usuario);
            //     break;
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
