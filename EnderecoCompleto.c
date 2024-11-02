#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <locale.h>

struct cadastro{
	char nome[60];
	char endereco[50];
	char numero[5];
	char bairro[20];
	char complemento[60];
	char cep[10];	
	char cidade [20];
	char uf[3];
	char telefone1 [12];
	char telefone2 [12];
	char telefone3 [12];
}moradores[20];
	
int main(void){
	setlocale(LC_ALL,"Portuguese");
    //struct cadastro moradores[5]; //Delimita a quantidade de cadastros
	int i,n;
	
	printf("BEM VINDO!");
	printf("\nCadastro da Exportadora J&S Brasil");
	printf("\nQuantas pessoas ser�o cadastradas? ");
	scanf("%d",&n);
	getchar();
	
	 
	for(i=0;i<n;i++){

		printf("Nome do(a) %d� cadastrado(a): ", i+1);
        fgets(moradores[i].nome, sizeof(moradores[i].nome), stdin);
        moradores[i].nome[strcspn(moradores[i].nome, "\n")] = '\0'; // Remover a nova linha
		
		
		printf("\nEndere�o: ");
		fgets(moradores[i].endereco, sizeof(moradores[i].endereco),stdin);
		moradores[i].endereco[strcspn(moradores[i].endereco,"\n")] = '\0';
	
		
		printf("\nN�mero: ");
		fgets(moradores[i].numero, sizeof(moradores[i].numero),stdin);
		moradores[i].numero[strcspn(moradores[i].numero,"\n")] = '\0';
		
		
		printf("\nBairro: ");
		fgets(moradores[i].bairro, sizeof(moradores[i].bairro),stdin);
		moradores[i].bairro[strcspn(moradores[i].bairro,"\n")] = '\0';
		
		printf("\nComplemento: ");
		fgets(moradores[i].complemento, sizeof(moradores[i].complemento),stdin);
		moradores[i].complemento[strcspn(moradores[i].complemento,"\n")] = '\0';
		
	
        printf("CEP (formato 12345-678): ");
        fgets(moradores[i].cep, sizeof(moradores[i].cep), stdin);
        moradores[i].cep[strcspn(moradores[i].cep, "\n")] = '\0';
        //getchar();
           
        printf("\nCidade: ");
		fgets(moradores[i].cidade, sizeof(moradores[i].cidade),stdin);
		moradores[i].cidade[strcspn(moradores[i].cidade, "\n")] = '\0';
		
		printf("\nUF: ");
		fgets(moradores[i].uf, sizeof(moradores[i].uf),stdin);
		moradores[i].uf[strcspn(moradores[i].uf, "\n")] = '\0';
		getchar();
		
		printf("\nTelefone 1: ");
		fgets(moradores[i].telefone1, sizeof(moradores[i].telefone1),stdin);
		moradores[i].telefone1[strcspn(moradores[i].telefone1, "\n")] = '\0';
		
		printf("\nTelefone 2: ");
		fgets(moradores[i].telefone2, sizeof(moradores[i].telefone2), stdin);
		moradores[i].telefone2[strcspn(moradores[i].telefone2, "\n")] = '\0';
		
		
		printf("\nTelefone 3: ");
		fgets(moradores[i].telefone3, sizeof(moradores[i].telefone3),stdin);
		moradores[i].telefone3[strcspn(moradores[i].telefone3, "\n")] = '\0';
    }

	
    
    //Exibição dos dados
    for(i=0;i<n;i++){
    	printf("\n*************************************");
    	printf("Cadastro %d",i+1);
    	printf("\nNome: %s", moradores[i].nome);
		printf("\nEndere�o: %s",moradores[i].endereco);
		printf("\nN�mero: %s",moradores[i].numero);
		printf("\nBairro: %s", moradores[i].bairro);
		printf("\nComplemento: %s", moradores[i].complemento);
		printf("\nCep: %s", moradores[i].cep);
		printf("\nCidade: %s", moradores[i].cidade);
		printf("\nUF: %s", moradores[i].uf);
		printf("\nTelefone 1: %s", moradores[i].telefone1);
		printf("\nTelefone 2: %s", moradores[i].telefone2);
		printf("\nTelefone 3: %s", moradores[i].telefone3);
		printf("\n*************************************");
		printf("\n");
	}
    return 0;
}
