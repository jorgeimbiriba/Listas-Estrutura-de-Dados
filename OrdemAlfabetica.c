#include <stdio.h>
#include <string.h>
#include <locale.h>

ordemAlfabetica(){
	char ordemAlf [27] = {'A','B','C','D','E','F','G','H','I','J','H','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
}

int main(void){
setlocale(LC_ALL,"Portuguese");	
struct cadastro{
	char nome [100];
	char endereco[50];
	char telefone [11];
}pessoas;
	
	int i,j;
	for(i=0;i<5;i++){
		printf("Insira o nome da %dª pessoa: ",i+1);
	    fflush(stdin);	
	    fgets(pessoas.nome,100,stdin);
	    
	    printf("\nEndereço: ");
	    fflush(stdin);
	    fgets(pessoas.endereco,50,stdin);
	    
	    printf("\nTelefone: ");
	    fflush(stdin);
	    fgets(pessoas.telefone,11,stdin);
	}
	
	
	for(i=0;i<5;i++){
		ordemAlfabetica();
	}
	
	return 0;
}
