#include <stdio.h>
#include <stdlib.h>

#define MAX 5

typedef struct 
{
    int cod;
    char nome[50];
    char tel[15];
    char email[50];
} Agenda;

Agenda Inserir(Agenda agenda, int count){

  agenda.cod = count;
  setbuf(stdin, NULL);
  printf ("Digite o nome:\n");
  gets(&agenda.nome);
  fflush(stdin);
  printf ("Digite o telefone:\n");
  gets(&agenda.tel);
  fflush(stdin);
  printf ("Digite o email:\n");
  gets(&agenda.email);
  fflush(stdin);
}

void Listar(Agenda listaAgenda[]){
    
    int count;
    for (count =0; count <5; count++){
     printf("Codigo identificador: %d\n", listaAgenda[count].cod);
     printf("Nome: %s\n", listaAgenda[count].nome);
     printf("Telefone: %s\n", listaAgenda[count].tel);
     printf("E-mail: %s\n", listaAgenda[count].email);
    }
}


int main()
{
    int opcao, count;
    count = 1;

    Agenda listaDeAgenda[MAX];
    
    do{
	    Agenda agenda;
	    
        printf("Digite uma opcao: \n");
        printf("1 - para cadastro\n");
        printf("2 - para listar\n");
        printf("0 - para sair\n");
        scanf("%d", &opcao);

        switch(opcao){
            case 1:
            Inserir(agenda, count);
            count++;
            break;

            case 2:
            Listar(listaDeAgenda);
            break;
            
            case 0:
            	exit(0);
            	break;

            default:
            printf("Erro: opção inválida!\n");
        }
         if (opcao < 0){
         	printf ("AGENDA VAZIA!\n");
         	if (opcao > 5){
         		printf ("AGENDA LOTADA!\N");
			 }
		 }


		}while((opcao == 1 || opcao ==2) && count <= 5);


};
