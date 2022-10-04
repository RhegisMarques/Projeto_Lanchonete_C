	#include <stdio.h>
	#include <stdlib.h>
	#include <string.h>
	#include <time.h>
	#define MAX_PRODUTOS 10
	#define MAX_COMANDAS 10
	
	int op;
	
	/* Estrutura Comanda*/
	typedef struct{
	  int codigo;
	  int listaDeProdutos;
	  int tempoDeInicio;
	  int tempoDeFim;   
	}Comanda;
	Comanda comandas[MAX_COMANDAS];

	/* Estrutura Produto*/
	typedef struct{  
	  int codigo;
		int ativo;
	  char nome[10];
	  float valor[4];
	}Produto;
	Produto produtos[MAX_PRODUTOS];
	 
	void menuProduto();
	void menuComanda(); 
	
	int main(int argc, char const *argv[]){
	
	  menu();
	  return 0;
	}
	
	void menu(){
	   
	  int op;
	    do{
				system("cls");
	
	      printf("|==============================|\n");
	      printf("|     LANCHONETE RUN           |\n");
	      printf("|------------------------------|\n");	
	      printf("\n\t1 - COMANDA\n\t2 - PRODUTO\n\t0 - SAIR\n\n");
	      printf("|------------------------------|\n");
	      printf("|==============================|\n");
	      printf("Seleciona uma Opcao: ");  
	      scanf("%d", &op);
				getchar();
	      switch(op){
	        case 1:
	        menuComanda();
	        break;
	        
	        case 2:
	        menuProduto();				
	        break;
	        
	        case 0:				
	        system("cls");
	        break;
	      }
	      
	    }while (op!=0);
	}
	void cadastrarComanda();
	void excluirComanda();
	void listarComanda();

	void menuComanda(){
	   do{
	    system("cls");
	
	      printf("#==============================#\n");
	      printf("|           COMANDA            |\n");
	      printf("|------------------------------|\n");	
	      printf("\n\t1 - CADASTRAR\n\t2 - EXCLUIR\n\t3 - LISTAR\n\t0 - SAIR\n\n");
	      printf("|------------------------------|\n");
	      printf("|==============================|\n");
	      printf("Seleciona uma Opcao: ");  
	      scanf("%d", &op);

        switch(op){
	        case 1:
	        cadastrarComanda();
	        break;
	        
	        case 2:
	        excluirComanda();				
	        break;

          case 3:
	        listarComanda();				
	        break;
	        
	        case 0:				
	        system("cls");
	        break;
	      }   
	
	
	    }while (op!= 0);
	
	}

	void cadastrarProduto();
	void excluirProduto();
	void listarProduto();

	void menuProduto(){
	  
	
	  do{
			system("cls");
	
	      printf("|==============================|\n");
	      printf("|           PRODUTO            |\n");
	      printf("|------------------------------|\n");	
	      printf("\n\t1 - CADASTRAR\n\t2 - EXCLUIR\n\t3 - LISTAR\n\t0 - SAIR\n\n");
	      printf("|------------------------------|\n");
	      printf("|==============================|\n");
	      printf("Seleciona uma Opcao: ");  
	      scanf("%d", &op);
				getchar();
	       switch(op){
	        case 1:
	        cadastrarProduto();
	        break;
	        
	        case 2:
	        excluirProduto();				
	        break;

          case 3:
	        listarProduto();				
	        break;
	        
	        case 0:				
	        system("cls");
	        break;
	      }       
	
	
	    }while (op!= 0);
	
	}
	void cadastrarProduto(){
		int codigo;
	  char nome[10];
	  float valor[4];
		int ativo;
		int op;
		do
		{
			printf("\nCodigo: ");
			scanf("%d", &codigo);
			printf("\nNome: ");
			fgets(nome, sizeof(nome),stdin);
			printf("\nValor: ");
			scanf("%f", &valor[0]);
			for (int i = 0; i < MAX_PRODUTOS; i++)
			{
				if (produtos[i].ativo ==0)
				strcpy(produtos[i].nome, nome);
				produtos[i].ativo=1;
				break;
			}
			
			printf("\n1 - Continuar\n0 - Sair\n");
			scanf("%d", &op);
			
		} while (op!=0);
		
	}
	void excluirProduto(){

	}
	void listarProduto(){
		printf("\n LISTA DE PRODUTOS\n");
		for (int i = 0; i < MAX_PRODUTOS; i++)
		{
			if (produtos[i].ativo==1)
			{
				
				printf("Nome: %s\n", produtos[i].nome);
				printf("\n------------------\n");

			}
			
			
		}
		
	}
	
