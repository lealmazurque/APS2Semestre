#include <stdio.h>

#include <stdlib.h>

#include <string.h>



#define TAM 1024

#define CHAVE 7

#define MAX_LINHAS 51199



int main(){

	FILE *entrada = fopen("saida.txt", "r");

	FILE *saida = fopen("descrip.txt", "w+");

	int i, j, cont, ultimoI, k;



	printf("Descriptografia Transposta\n");



	char buffer[TAM];

	char linha[TAM];



	int matriz[MAX_LINHAS][CHAVE];



	if(entrada != NULL && saida != NULL){

		cont = 0;

		j = 0;

		k = 0;



		while(!feof(entrada)){

			for(i = 0; i < TAM; i++) linha[i] = '\0'; // limpa o buffer

			for(i = 0; i < TAM; i++) buffer[i] = '\0'; // limpa o buffer



			cont = fread(linha, sizeof(char), TAM, entrada);

		}



		for(i = 0, j = 0, k = 0; k < cont; ){

			matriz[i][j] = linha[k];

			k++;

			j++;

			if(j == CHAVE){

				j = 0;

				i++;

			}

			ultimoI = i;

		}



		if(j < CHAVE){

			for(cont = j; cont < CHAVE; cont++){

				matriz[ultimoI][cont] = 55;

			}

		}



		for(j = 0; j < CHAVE; j++){

			for(i = 0; i <= ultimoI; i++){

				buffer[0] = matriz[i][j];

				fwrite(buffer, sizeof(char), 1, saida);

			}

		}

	}



	fclose(entrada);

	fclose(saida);

	return 0;

}
