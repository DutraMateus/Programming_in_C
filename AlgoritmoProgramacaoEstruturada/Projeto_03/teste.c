#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
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
        user->ponteiro = lista;
        lista = user;
        return user;
    }
}
// Usuario *editarCadastro(Usuario *lista)
// {
//     Usuario *auxiliar;
//     int idProcurar, opcao;
//     int contador = 0, tamanho = 0;
//     bool encontrado = false;

//     printf("\tInforme o id do usuario que deseja realizar alteracoes:\n");
//     scanf("%d", &idProcurar);
//     getchar(); 

//     for (auxiliar = lista; auxiliar != NULL; auxiliar = auxiliar->ponteiro)
//     {
//         tamanho++;
//         if (auxiliar->id == idProcurar)
//         {
//             encontrado = true;
//             break;
//         }
//         contador++;
//     }

//     if (encontrado)
//     {
//         printf("\nInforme qual dado deseja alterar: ");
//         printf("\n1 - Nome\n2 - Email\n3 - Sexo\n4 - Endereco\n5 - Altura\n6 - Vacina\n");
//         scanf("%d", &opcao);
//         getchar(); 

//         switch (opcao)
//         {
//         case 1:
//             printf("\nInforme o Nome correto: ");
//             fgets(auxiliar->nomeCompleto, sizeof(auxiliar->nomeCompleto), stdin);
//             auxiliar->nomeCompleto[strcspn(auxiliar->nomeCompleto, "\n")] = '\0';
//             break;
//         case 2:
//             printf("\nInforme o Email correto: ");
//             fgets(auxiliar->email, sizeof(auxiliar->email), stdin);
//             auxiliar->email[strcspn(auxiliar->email, "\n")] = '\0';
//             break;
//         case 3:
//             printf("\nInforme o Sexo correto: ");
//             fgets(auxiliar->sexo, sizeof(auxiliar->sexo), stdin);
//             auxiliar->sexo[strcspn(auxiliar->sexo, "\n")] = '\0';
//             break;
//         case 4:
//             printf("\nInforme o Endereco correto: ");
//             fgets(auxiliar->endereco, sizeof(auxiliar->endereco), stdin);
//             auxiliar->endereco[strcspn(auxiliar->endereco, "\n")] = '\0';
//             break;
//         case 5:
//             printf("\nInforme a Altura correta: ");
//             scanf("%lf", &auxiliar->altura);
//             getchar(); 
//             break;
//         case 6:
//             printf("\nInforme o status correto da Vacina: ");
//             scanf("%d", &auxiliar->vacina);
//             getchar(); 
//             break;
//         default:
//             printf("\nOpcao invalida!");
//         }
//     }
//     else
//     {
//         printf("Usuario nao encontrado.\n");
//     }

//     return lista;
// }
// Usuario *editarCadastro(Usuario *lista)
// {
//     Usuario *auxiliar;
//     int idProcurar, opcao;
//     int contador = 0, tamanho = 0;
//     bool encontrado = false;

//     printf("\tInforme o id do usuario que deseja realizar alteracoes:\n");
//     scanf("%d", &idProcurar);
//     getchar();
    

//     for (auxiliar = lista; auxiliar != NULL; auxiliar = auxiliar->ponteiro)
//     {
//         tamanho++;
//         if (auxiliar->id == idProcurar)
//         {
//             encontrado = true;
//             break;
//         }
//         contador++;
//     }

//     if (encontrado)
//     {
//         printf("\nInforme qual dado deseja alterar: ");
//         printf("\n1 - Nome\n2 - Email\n3 - Sexo\n4 - Endereco\n5 - Altura\n6 - Vacina\n");
//         scanf("%d", &opcao);

//         switch (opcao)
//         {
//             case 1:
//                 printf("\nInforme o Nome correto: ");
//                 fgets(auxiliar->nomeCompleto, 30, stdin);
//                 break;
//             case 2:
//                 printf("\nInforme o Email correto: ");
//                 fgets(auxiliar->email, 30, stdin);
//                 break;
//             case 3:
//                 printf("\nInforme o Sexo correto: ");
//                 fgets(auxiliar->sexo, 10, stdin);
//                 break;
//             case 4:
//                 printf("\nInforme o Endereco correto: ");
//                 fgets(auxiliar->endereco, 50, stdin);
//                 break;
//             case 5:
//                 printf("\nInforme a Altura correta: ");
//                 scanf("%lf", &auxiliar->altura);
//                 break;
//             case 6:
//                 printf("\nInforme o status correto da Vacina: ");
//                 scanf("%d", &auxiliar->vacina);
//                 break;
//             default:
//                 printf("\nOpcao invalida!");
//         }
//     }
//     else
//     {
//         printf("Usuario nao encontrado.\n");
//     }
    
//     return lista;
// }
// Usuario *editarCadastro(Usuario *lista)
// {
//     Usuario *auxiliar;
//     unsigned int idProcurar, opcao;
//     int contador = 0, tamanho = 0;
//     bool encontrado = false;

//     printf("\tInforme o id do usuario que deseja realizar alteracoes:\n");
//     scanf("%u", &idProcurar);
//     getchar(); // Consumir o caractere de nova linha residual

//     for (auxiliar = lista; auxiliar != NULL; auxiliar = auxiliar->ponteiro)
//     {
//         tamanho++;
//         if (auxiliar->id == idProcurar)
//         {
//             encontrado = true;
//             break;
//         }
//         contador++;
//     }

//     if (encontrado)
//     {
//         printf("\nInforme qual dado deseja alterar: ");
//         printf("\n1 - Nome\n2 - Email\n3 - Sexo\n4 - Endereco\n5 - Altura\n6 - Vacina\n");
//         scanf("%u", &opcao);
//         getchar(); // Consumir o caractere de nova linha residual

//         switch (opcao)
//         {
//             case 1:
//                 printf("\nInforme o Nome correto: ");
//                 fgets(auxiliar->nomeCompleto, sizeof(auxiliar->nomeCompleto), stdin);
//                 auxiliar->nomeCompleto[strcspn(auxiliar->nomeCompleto, "\n")] = '\0';
//                 break;
//             case 2:
//                 printf("\nInforme o Email correto: ");
//                 fgets(auxiliar->email, sizeof(auxiliar->email), stdin);
//                 auxiliar->email[strcspn(auxiliar->email, "\n")] = '\0';
//                 break;
//             case 3:
//                 printf("\nInforme o Sexo correto: ");
//                 fgets(auxiliar->sexo, sizeof(auxiliar->sexo), stdin);
//                 auxiliar->sexo[strcspn(auxiliar->sexo, "\n")] = '\0';
//                 break;
//             case 4:
//                 printf("\nInforme o Endereco correto: ");
//                 fgets(auxiliar->endereco, sizeof(auxiliar->endereco), stdin);
//                 auxiliar->endereco[strcspn(auxiliar->endereco, "\n")] = '\0';
//                 break;
//             case 5:
//                 printf("\nInforme a Altura correta: ");
//                 scanf("%lf", &auxiliar->altura);
//                 getchar(); // Consumir o caractere de nova linha residual
//                 break;
//             case 6:
//                 printf("\nInforme o status correto da Vacina: ");
//                 scanf("%d", &auxiliar->vacina);
//                 getchar(); // Consumir o caractere de nova linha residual
//                 break;
//             default:
//                 printf("\nOpcao invalida!");
//         }
//     }
//     else
//     {
//         printf("Usuario nao encontrado.\n");
//     }

//     return lista;
// }


int main()
{
    srand(time(NULL));
    int opcao;
    Usuario *lista = comecar();
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
        case 2:
            editarCadastro(lista);
            break;
        // case 3:
        //     excluirUsuario();
        //     break;
        // case 4:
        //     imprimirUsuario();
        //     break;
        default:
            printf("\nSelecione uma das opcoes informadas (1 a 6)");
        }
    } while (opcao != 8);
    return 0;
}
