#include <stdio.h>
#include <stdlib.h>
#define QNT 1



typedef struct sVeiculo{
	int chassi, ano, ;
	char placa[6], propietario[30], combustivel[30], modelo[50], cor[50], ;
} Veiculo;


int main(){


	int i;
	Veiculo carros[QNT];

	for(i = 0; i < QNT; i++)
	{
	printf("Digite o nome do proprietario:");
	gets(carros[i].propietario);

	printf("Digite o combustível utilizado (Álcool, Diesel ou Gasolina):");
	gets(carros[i].combustivel);
	
	printf("Digite o modelo do carro:");
	gets(carros[i].modelo);

	printf("Digite a cor do carro:");
	gets(carros[i].cor);
	
	printf("Digite o nº do chassi:");
	scanf("%d", &carros[i].chassi);

	printf("Digite o ano do veículo:");
	scanf(" %d", &carros[i].ano);
	getchar(); 

	printf("Digite a placa do veículo:");
	gets(carros[i].placa);

	}

//b) Construa um algoritmo que liste todos os proprietários cujos carros são do ano de
//2010 ou posterior e que sejam movidos a diesel.


	printf("\nProprietários com veículos a diesel do ano de 1980 ou posterior:\n");
	for(i = 0; i < QNT; i++)
	{

		if(carros[i].ano >= 2010 && carros[i].combustivel == "Diesel")	
		{
		printf("Nome: %s \n", carros[i].nome);
		}
	}
	printf("\n");	

/* b) Escreva um algoritmo que liste todas as placas que comecem com a letra J e
terminem com 0, 2, 4 ou 7 e seus respectivos proprietários. (Sugestão: utilize a placa
como um vetor de caracter) */


	printf("\nPlacas que começam com A e terminam com 0, 2, 4 ou 7:");
	for(i = 0; i < QNT; i++)
	{
		if(carros[i].placa[0] == 'J' && carros[i].placa[6] == '2')	
		{
		printf("\nPlaca: %s ", carros[i].placa);
		}
	}
	printf("\n\n");		

/* c) Elabore um algoritmo que liste o modelo e a cor dos veículos cujas placas possuem
como segunda letra uma vogal e cuja soma dos valores numéricos fornece um
número par. */

printf("\nModelo e cor dos veículos com placas cuja segunda letra é uma vogal e a soma dos valores numéricos da placa é um número par:\n");
	for(i = 0; i < QNT; i++)
	{
		((carros[i].placa[1] == 'A' || carros[i].placa[1] == 'E' || carros[i].placa[1] == 'I' || carros[i].placa[1] == 'O' || carros[i].placa[1] == 'U') &&
            ((carros[i].placa[4]) + (carros[i].placa[5]) + (carros[i].placa[6])) % 2 == 0) {
            printf("Modelo: %s - Cor: %s\n", lista->modelo, lista->cor);
        }
	}
	printf("\n\n");		

/* d) Construa um algoritmo que permita a troca de proprietário com o fornecimento do
número do chassi apenas para carros com placas que não possuem nenhum dígito
igual a zero. */

void trocarProprietarioSemDigitoZero(Veiculo *lista, char carros[i].chassi[], novoProprietario[]) {
    while (lista != NULL) {
        int hasZero = 0;
        for (int i = 4; i < 8; i++) {
            if (carros[i].placa == '0') {
                hasZero = 1;
                break;
            }
        }
        if (!hasZero && strcmp(lista->carros[i].chassi, carros[i].chassi) == 0) {
            strcpy(lista->proprietario, novoProprietario);
            printf("Proprietário atualizado com sucesso para o veículo com placa %s\n", carros[i].placa);
            return;
        }
        lista = lista->proximo;
    }
    printf("Nenhum veículo encontrado com o número de chassi fornecido ou a placa do veículo possui algum dígito zero.\n");
}

return 0;
} 