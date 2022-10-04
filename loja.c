#include <stdio.h>
#include <stdlib.h>
#include <time.h>


typedef struct comanda
{
    int valor;
    struct comanda *proximo;

} Comanda;

void inserir_na_fila(Comanda **comanda, int num)
{
    Comanda *aux, *novo = malloc(sizeof(Comanda));
    if (novo)
    {
        novo->valor = num;
        novo->proximo = NULL;
        if (*comanda == NULL)
            *comanda = novo;
        else
        {
            aux = *comanda;
            while (aux->proximo)
                aux = aux->proximo;
            aux->proximo = novo;
        }
    }
    else
        printf("\nErro ao alocar memoria. \n");
}

Comanda *remover_da_fila(Comanda **comanda)
{
    Comanda *remover = NULL;

    if (*comanda)
    {
        remover = *comanda;
        *comanda = remover->proximo;
    }
    else
        printf("\nComanda vazia\n");

    return remover;
}

void imprimir(Comanda *comanda)
{
    printf("============== COMANDA ===============\n\n");
    while (comanda)
    {
        printf("Comanda: %d ", comanda->valor);
        comanda = comanda->proximo;
    }

    const time_t timer = time(NULL);
    printf("\n\n\n DATA e HORA: %s\n", ctime(&timer));

    printf("\n|=========== FIM DA COMANDA ==========\n\n\n");
}

int main()
{
    Comanda *r, *comanda = NULL;
    int opcao, valor;

    do
    {
        printf("|=====================================|\n");
        printf("|         LANCHONETE STORE            |\n");
        printf("|-------------------------------------|\n");
        printf("\t0 - Sair\n\t1 - Inserir Comanda\n\t2 - Remover da Comanda\n\t3 - Imprimir Comanda\n");
        printf("|=====================================|\n");
        printf("Selecione uma opcao desejada.  \n");
        printf(">>>");
        scanf("%d", &opcao);
        system("cls");

        switch (opcao)
        {
        case 1:
            printf("Digite um valor: ");
            scanf("%d", &valor);
            inserir_na_fila(&comanda, valor);
            break;

        case 2:
            r = remover_da_fila(&comanda);
            if (r)
            {
                printf("Removido: %d\n", r->valor);
                free(r);
            }
            break;

        case 3:
            imprimir(comanda);
            break;

        default:
            if (opcao != 0)
                printf("\nOpcao Invalida!\n");
        }

    } while (opcao != 0);

    return 0;
}
