#include <stdio.h>
#include <string.h>
#include <locale.h>

struct Pessoa{
	char nome [100];
	char endereco[50];
	char telefone [11];
};

void ordenarPorNome(struct Pessoa pessoas[], int n) {
	int i,j; 
    struct Pessoa aux;
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (strcmp(pessoas[i].nome, pessoas[j].nome) > 0) {
                aux = pessoas[i];
                pessoas[i] = pessoas[j];
                pessoas[j] = aux;
            }
        }
    }
}

int main(void){
    setlocale(LC_ALL,"Portuguese");	
    struct Pessoa pessoas[5];
	
	int i;
	for(i=0;i< 5 ;i++){
		printf("Insira o nome da %dº pessoa: ",i+1);	
	    fgets(pessoas[i].nome,100,stdin);
	    pessoas[i].nome[strcspn(pessoas[i].nome, "\n")] = '\0'; 
	    
	    printf("\nEndereço: ");
	    fgets(pessoas[i].endereco,50,stdin);
		pessoas[i].endereco[strcspn(pessoas[i].endereco, "\n")] = '\0';
	    
	    printf("\nTelefone: ");
	    fgets(pessoas[i].telefone,11,stdin);
		pessoas[i].telefone[strcspn(pessoas[i].telefone, "\n")] = '\0';
	}
	
	ordenarPorNome(pessoas,5);
	
	for(i=0;i<5;i++){
		printf("\n********************************");
		printf("\nPessoa %d: ",i+1);
		printf("\nNome: %s", pessoas[i].nome);
		printf("\nEndereço: %s", pessoas[i].endereco);
		printf("\nTelefone: %s", pessoas[i].telefone);	
		printf("\n********************************");	
	}
	
	return 0;
}
