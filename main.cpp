#include <stdio.h>
#define TAM 10

typedef struct{
	char marca[50];
	char modelo[50];
	int ano;
	float valor;
}carro;

void cadastrar(carro estoque[TAM], int *controle);
void listar(carro estoque[TAM], int controle);
void editar(carro estoque[TAM], int controle);

main(){
	int menu, controle=0;
	carro estoque[TAM];
	do{
		printf("\n1 - Cadastrar Veiculo");
		printf("\n2 - Listar Veiculo");
		printf("\n3 - Excluir Veiculo");
		printf("\n4 - Editar Veiculo");
		printf("\n5 - Atualizar tabela Veiculo");
		printf("\n6 - Sair Veiculo");
		scanf("%i",&menu);
		switch(menu){
			   case 1: cadastrar(estoque,&controle);
			
			break;
				case 2: listar(estoque,controle);
			
			break;
				case 3: printf("\n ==> Opcao escolhida: Excluir");
			
			break;
				case 4: printf("\n ==> Edicao");
			break;
			
				case 5: printf("\n ==> Atualizar tabela"); //informa o percentual pelo usuario
			break;
			
				case 6: printf("\n ==> Sair");
			break;
		default : printf("\n\t ==> opcao invalida: Tente novamente");
		}
		
	}while(menu!=5);
}

void cadastrar(carro estoque[TAM], int *controle){
	printf("\n Infomre a marca: ");
	fflush(stdin);
	gets(estoque[*controle].marca);
	printf("\n informe o modelo: ");
	gets(estoque[*controle].modelo);
	printf("\n informe o ano");
	scanf("%i",&estoque[*controle].ano);
	printf("\n informe o valor:");
	scanf("%f",&estoque[*controle].valor);
	printf("\n\t ==> veiculo cadastrado com sucesso!");
	*controle=*controle+1;
	
}
void listar(carro estoque[TAM], int controle){
	
printf("\n\t Veiculos cadastrados:");
	for(int x=0; x<controle;x++){
		printf("veiculo %i",x+1);
		printf("marca %s",estoque[x].marca);
		printf("\n....................");
		
	}
}