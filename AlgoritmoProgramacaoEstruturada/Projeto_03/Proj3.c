#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

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
    struct usuario *ponteiro;
} Usuario;

Usuario *comecar()
{
    return NULL;
}
Usuario *cadastro(Usuario *lista)
{

    Usuario *user = (Usuario *)malloc(sizeof(Usuario));
    {
        printf("\nInforme o NOME do usuario: ");
        fgets(user->nomeCompleto, 40, stdin);
        fflush(stdin);

        getchar();

        do
        {
            printf("\nInforme o EMAIL do usuario: ");
            fgets(user->email, 30, stdin);
            fflush(stdin);
        } while (strchr(user->email, '@') == 0);
        do
        {
            printf("\nInforme o SEXO do usuario: ");
            fgets(user->sexo, 10, stdin);
            fflush(stdin);
        } while (strchr(user->sexo, 'feminino') == 0 && strchr(user->sexo, 'masculino') == 0 && strchr(user->sexo, 'outros') == 0);

        printf("\nInforme o ENDERECO do usuario: ");
        fgets(user->endereco, 50, stdin);
        fflush(stdin);

        do
        {
            printf("\nInforme o ALTURA(metros) do usuario: ");
            scanf("%lf", &user->altura);
            fflush(stdin);
        } while (user->altura < 1 || user->altura > 2);

        do
        {
            printf("\nInfome se o usuario foi ou nao VACINADO(1 - sim) (0 - nao): ");
            scanf("%d", &user->vacina);
            fflush(stdin);
        } while (user->vacina != 1 && user->vacina != 0);

        user->id = idUser();
        printf("\nUsuario criado com id: %d\n\n", user->id);

        numeroUsuarios++;
        return;
    }
}

int main()
{
    srand(time(NULL));
    int opcao, continuar;
    Usuario *lista;
    do
    {

        printf("->\tSeja bem vindo ao menu!<-\n\n");
        printf("\nInforme o que deseja realizar no programa:\n\n1 - Incluir usuarios\n2 - Editar usuarios\n3 - Excluir usuario\n4 - Apresentar usuarios\n\n");
        scanf("%d", &opcao);
        switch (opcao)
        {
        case 1:
            cadastro(lista);
            break;
        // case 2:
        //     editarCadastro();
        //     break;
        // case 3:
        //     excluirUsuario();
        //     break;
        // case 4:
        //     imprimirUsuario();
        //     break;
        default:
            printf("\nSelecione uma das opcoes informadas (1 a 6)");
        }
    } while (continuar != 8);
    return 0;
}
