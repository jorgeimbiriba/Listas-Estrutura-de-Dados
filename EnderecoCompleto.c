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
	char cep[9];	
	char cidade [20];
	char uf[1];
	char telefone1 [12];
	char telefone2 [12];
	char telefone3 [12];
};
	
int valida_cep(char *cep) {
	int j;
    // Verifica se o CEP tem 8 caracteres e se o 5º caractere é o hífen
    if (strlen(cep) != 8 || cep[5] != '-') {
        return 0; // CEP inválido
    }
    // Verifica se todos os caracteres são dígitos (exceto o hífen)
    for ( j = 0; j < 8; j++) {
        if (j != 5 && !isdigit(cep[j])) {
            return 0;
        }
    }
    return 1; // CEP válido
}

int main(void){
	setlocale(LC_ALL,"Portuguese");
    struct cadastro moradores[10]; //Delimita a quantidade de cadastros
	int i,n;
	
	printf("BEM VINDO!");
	printf("\nCadastro da Exportadora J&S Brasil");
	printf("\nQuantas pessoas serão cadastradas? ");
	scanf("%d",&n);
	getchar();
	
	 
    
	for(i=0;i<n;i++){

		printf("Nome do(a) %dº cadastrado(a): ", i+1);
        fgets(moradores[i].nome, sizeof(moradores[i].nome), stdin);
        moradores[i].nome[strcspn(moradores[i].nome, "\n")] = '\0'; // Remover a nova linha
		
		
		printf("\nEndereço: ");
		fgets(moradores[i].endereco, sizeof(moradores[i].endereco),stdin);
		moradores[i].endereco[strcspn(moradores[i].endereco,"\n")] = '\0';
	
		
		printf("\nNúmero: ");
		fgets(moradores[i].numero, sizeof(moradores[i].numero),stdin);
		moradores[i].numero[strcspn(moradores[i].numero,"\n")] = '\0';
		
		
		printf("\nBairro: ");
		fgets(moradores[i].bairro, sizeof(moradores[i].bairro),stdin);
		moradores[i].bairro[strcspn(moradores[i].bairro,"\n")] = '\0';
		
		printf("\nComplemento: ");
		fgets(moradores[i].complemento, sizeof(moradores[i].complemento),stdin);
		moradores[i].complemento[strcspn(moradores[i].complemento,"\n")] = '\0';
		
		int tentativas = 0;
        do {
            printf("CEP (formato 12345-678): ");
            fgets(moradores[i].cep, sizeof(moradores[i].cep), stdin);
            moradores[i].cep[strcspn(moradores[i].cep, "\n")] = '\0';
            tentativas++;
        } while (!valida_cep(moradores[i].cep) && tentativas < 3); // Limita o número de tentativas

        if (tentativas >= 3) {
            printf("Número máximo de tentativas excedido para o CEP.\n");
            // Decida o que fazer: continuar para o próximo cadastro, interromper o programa, etc.
        }
    }

	for(i=0;i<n;i++){
		printf("\nCidade: ");
		fgets(moradores[i].cidade, sizeof(moradores[i].cidade),stdin);
		moradores[i].cidade[strcspn(moradores[i].cidade, "\n")] = '\0';
		
		
		printf("\nUF: ");
		fgets(moradores[i].uf, sizeof(moradores[i].uf),stdin);
		moradores[i].uf[strcspn(moradores[i].uf, "\n")] = '\0';
		
		
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
    	printf("Cadastro %d",i+1);
    	printf("\nNome: %s", moradores[i].nome);
		printf("\nEndereço: ",moradores[i].endereco);
		printf("\nNúmero: ",moradores[i].numero);
		printf("\nBairro:", moradores[i].bairro);
		printf("\nComplemento: ", moradores[i].complemento);
		printf("\nCep: ", moradores[i].cep);
		printf("\nCidade: ", moradores[i].cidade);
		printf("\nUF: ", moradores[i].uf);
		printf("\nTelefone 1: ", moradores[i].telefone1);
		printf("\nTelefone 2: ", moradores[i].telefone2);
		printf("\nTelefone 3: ", moradores[i].telefone3);
		printf("\n*************************************");
		printf("\n");
	}
    return 0;
}
