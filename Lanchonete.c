	#include <stdio.h>
	#include <stdlib.h>
	#include <time.h>
	
	int op;
	
	/* Estrutura Comanda*/
	typedef struct{
	  int codigo;
	  int listaDeProdutos;
	  int tempoDeInicio;
	  int tempoDeFim;   
	}Comanda;
	
	/* Estrutura Produto*/
	typedef struct{  
	  int codigo;
	  char nome[10];
	  float valor;
	}Produto;
	 
	void menuProduto();
	void menuComanda(); 
	
	int main(int argc, char const *argv[]){
	
	  menu();
	  return 0;
	}
	
	void menu(){
	  system("cls"); 
	  int op;
	    do{
	
	      printf("|==============================|\n");
	      printf("|     LANCHONETE RUN           |\n");
	      printf("|------------------------------|\n");	
	      printf("\n\t1 - COMANDA\n\t2 - PRODUTO\n\t0 - SAIR\n\n");
	      printf("|------------------------------|\n");
	      printf("|==============================|\n");
	      printf("Seleciona uma Opcao: ");  
	      scanf("%d", &op);
	
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
	
	void menuComanda(){
	   do{
	    system("cls");
	
	      printf("#==============================#\n");
	      printf("|           COMANDA            |\n");
	      printf("|------------------------------|\n");	
	      printf("\n\t1 - CADASTRAR\n\t2 - EXCLUIR\n\t3 - PESQUISAR\n\t0 - SAIR\n\n");
	      printf("|------------------------------|\n");
	      printf("|==============================|\n");
	      printf("Seleciona uma Opcao: ");  
	      scanf("%d", &op);

        switch(op){
	        case 1:
	        Cadastrar();
	        break;
	        
	        case 2:
	        excluir();				
	        break;

          case 3:
	        pesquisar();				
	        break;
	        
	        case 0:				
	        system("cls");
	        break;
	      }   
	
	
	    }while (op!= 0);
	
	}
	
	void menuProduto(){
	  system("cls");
	
	  do{
	
	      printf("|==============================|\n");
	      printf("|           PRODUTO            |\n");
	      printf("|------------------------------|\n");	
	      printf("\n\t1 - CADASTRAR\n\t2 - EXCLUIR\n\t3 - PESQUISAR\n\t0 - SAIR\n\n");
	      printf("|------------------------------|\n");
	      printf("|==============================|\n");
	      printf("Seleciona uma Opcao: ");  
	      scanf("%d", &op);
	       switch(op){
	        case 1:
	        Cadastrar();
	        break;
	        
	        case 2:
	        excluir();				
	        break;

          case 3:
	        pesquisar();				
	        break;
	        
	        case 0:				
	        system("cls");
	        break;
	      }       
	
	
	    }while (op!= 0);
	
	}
	
	
