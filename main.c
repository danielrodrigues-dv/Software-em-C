#include <stdio.h>
#include <stdlib.h>
#define SIZE 2300
#include <locale.h>
char nome [SIZE][50];
char email[SIZE][50];
int cpf[SIZE];
char chamado[SIZE][50];


char tipocliente[SIZE][50];
char razaosocial[SIZE][50];
char nfantasia[SIZE][50];
char endereco[SIZE][50];
char bairro[SIZE][50];
char cidade[SIZE][50];
char estado[SIZE][50];
int cep[SIZE];
int telefone[SIZE];
char tipo[SIZE][50];
int cnpj[SIZE];
int datainicio[SIZE];
char status[SIZE][50];
int chamadocodigo[SIZE];



int op;
void cadastro();
void pesquisa();
void logar();
void fornecedor();
void listafornecedor();
void desenvolvedor();



int main(void) {
		setlocale(LC_ALL, "Portuguese");
	system("color 4f");
	logar();

	do{
	system("cls");
		printf("\n---------------------------------| MENU |-----------------------------------------\n");
		printf("\n1- Novo Cliente\n2- Pesquisar Cliente\n3- Novo Chamado\n4- Pesquisar Chamado\n5 - Créditos\n6- Sair\n\nEscolha uma das opções: ");
		scanf("%d",&op);
		switch(op){
			case 1:
				cadastro();
				
				break;
			case 2:
				pesquisa();
				break;
			case 3:
				fornecedor();
				break;
			case 4:
				listafornecedor();
				break;
				case 5:
			desenvolvedor();
				break;
			case 6:
				system("exit");
				break;
				default:
					printf("Opção invalida");
					getchar();
					getchar();
					break;
		}
	}while(op!=6);
}//fim do loop menu.


void desenvolvedor(){
system ("cls");
	do{
		printf("\t\t*****Informações do Desenvolvedor****\n");
	printf("\n\t->@Créditos\n");
	printf("\n\t->Daniel Soares\n");
	printf("\n\t*****https://github.com/danielrodrigues-dv****\n");
	printf("\n\n\nDigite '2' para sair: \n");
	scanf("%d", &op);
	}while(op==1);
}



void listaa(){
int j;
	do{
		for(j=0;j<200; j++){
			if(cnpj[j]>0){		
			printf("\nNome: %s\nE-mail: %s\nCPF: %d", nome[j],email[j], cpf[j]);	
			}else{
				printf("\n\n\nDigite '2' para sair: \n");
			scanf("%d", &op);
			}
		}
	}while(op!=1);
}


void cadastro(){
	static int linha;
	system("cls");
	printf("\n---------------------------------| NOVO CLIENTE|-----------------------------------\n");
	do{
		fflush(stdin);
		printf("\nTipo de Cliente Ex:(Interno/Externo): ");
		gets(&tipocliente[linha]);
		printf("\nRazao social: ");
		gets(&razaosocial[linha]);
		printf("\nNome Fantasia: ");
		gets(&nfantasia[linha]);
		printf("\nE-mail: ");
		gets(&email[linha]);
		printf("\nEndereco: ");
		gets(&endereco[linha]);
		printf("\nBairro: ");
		gets(&bairro[linha]);
		printf("\nCidade: ");
		gets(&cidade[linha]);
		printf("\nEstado: ");
		gets(&estado[linha]);
		printf("\nCEP: ");
		scanf("%d", &cep[linha]);
		fflush(stdin);
		printf("\nTelefone: ");
		scanf("%d", &telefone[linha]);
		printf("\nCNPJ: ");
		fflush(stdin);
		scanf("%d", &cnpj[linha]);
		printf("\n\nDeseja realizar mais Cadastro? ");
		printf("\n1-SIM     2-NÃO : ");
		scanf("%d", &op);
		system("cls");
		linha++;
	}while(op==1);
}//fim da funcao.


void pesquisa(){
	int cnpjPesquisa;
	char emailPesquisa[50];
	int i;
	do{
		system("cls");
		printf("\n---------------------------------| PESQUISAR CLIENTE |--------------------------------\n");
    	printf("\n1- PESQUISAR POR CNPJ ");
		printf("\n2- PESQUISAR POR EMAIL ");
		printf("\n\nEscolha uma das opções: ");
		scanf("%d",&op);
		switch(op){
			case 1:
				system("cls");
				printf("\n---------------------------| CAMPO DE BUSCA - CNPJ |-------------------------------\n");
				printf("\nInforme o CNPJ: ");
				scanf("%d", &cnpjPesquisa);
				for(i=0;i <SIZE; i++){
					if(cnpj[i]==cnpjPesquisa){
						printf("\nTipo: %s \nRazao Social: %s \nNome Fantasia: %s \nE-mail: %s\nEndereco: %s \nBairro: %s \nCidade: %s \nEstado: %s \nCEP: %d \nTelefone: %d \nCnpj: %d \n\n", tipocliente[i], razaosocial[i], nfantasia[i], email[i], endereco[i],  bairro[i], cidade[i], estado[i], cep[i], telefone[i], cnpj[i]);
					}
				}
				break;
				
			case 2:
				system("cls");
				printf("\n---------------------------| CAMPO DE BUSCA - E-MAIL |-----------------------------\n");
				printf("\nDigite o E-mail: ");
				scanf("%s", emailPesquisa);
				for(i=0;i <SIZE; i++){
					if(strcmp(email[i], emailPesquisa)==0){
						printf("\nTipo: %s \nRazao Social: %s \nNome Fantasia: %s \nE-mail: %s\nEndereco: %s \nBairro: %s \nCidade: %s \nEstado: %s \nCEP: %d \nTelefone: %d \nCnpj: %d \n\n", tipocliente[i], razaosocial[i], nfantasia[i], email[i], endereco[i],  bairro[i], cidade[i], estado[i], cep[i], telefone[i], cnpj[i]);
					}
				}
				break;
			
			default:
				printf("\nOpção invalida ");
				break;
		}
		
	printf("\n\n1- continuar 2-sair: ");
	scanf("%d", &op);	
	}while(op==1);
}//fim do codigo pesquisa



void logar(){
system("color 4f");
char sn;
	printf("-----------------------------------|LOGIN SISTEMA|-------------------------------------------\n");
do{
	printf("\nDigite sua senha: ");
	scanf("%s", &sn);
	if(sn=='z'){
		printf("\nMensagem: Senha Valida com sucesso!");
		sleep(3);
	}else{
	printf("\nMensagem: Senha errada, por favor verifique suas credencias \n"); 
	sleep(3); 
	system("cls"); 
	}
	
	
}while(sn!='z');
}


void fornecedor(){
	static int linhaa;
	system("cls");
	printf("\n-------------------------------| NOVO CHAMADO |-------------------------------\n");
	do{
		printf("\nNúmero do chamado: ");
		scanf("%d",&chamadocodigo[linhaa]);
		fflush(stdin);
		printf("\nData de hoje: ");
		scanf("%d",&datainicio[linhaa]);
		fflush(stdin);
		printf("\nTipo do Servico Ex:(Manutenção): ");
		gets(&tipo[linhaa]);
		printf("\nCNPJ: ");
		scanf("%d", &cnpj[linhaa]);
		fflush(stdin);
		printf("\nStatus do Serviço EX:(Aberto/Fechado): ");
		gets(&status[linhaa]);
		printf("\n\nDeseja realizar mais Cadastro? ");
		printf("\n1-SIM    2-NÃO : ");
		scanf("%d", &op);
		system("cls");
		linhaa++;
	}while(op==1);
}//fim da funcao.
	

void listafornecedor(){
int chamadoPesquisa;
char cnpjPesquisa[50];
int j;
	do{
	    system("cls");
	    printf("\n---------------------------------| PESQUISAR CHAMADO |--------------------------------\n");
    	printf("\n1- PESQUISAR POR NÚMERO DE CHAMADO ");
		printf("\n\nEscolha uma das opções: ");
		scanf("%d",&op);
		switch(op){
			case 1:
				system("cls");
				printf("\n---------------------------| CAMPO DE BUSCA - CNPJ |-------------------------------\n");
				printf("\nInforme o NÚMERO do CHAMADO: ");
				scanf("%d", &chamadoPesquisa);
				for(j=0; j<SIZE; j++){
					if(chamadocodigo[j]==chamadoPesquisa){
						printf("\nNúmero do Chamado: %d \nData de criacao: %d\nCNPJ: %d", chamadocodigo[j], datainicio[j], cnpj[j]);
					}
				}
				break;
			
			default:
				printf("\nOpção invalida ");
				system("cls");
				break;
		}
	printf("\n\n1- continuar 2-sair: ");
	scanf("%d", &op);	
	}while(op==1);
}//fim do codigo pesquisa
	


	

	

	
		

	





