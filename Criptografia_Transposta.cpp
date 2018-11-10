#include "pch.h"
#include <iostream>
#include <stdio.h>
#include <cstring>
#include <string.h>
#include <stdlib.h>
#include <string.h>>

int main()
{
	char texto_usuario[n], textocriptografado[tamanho_string];// é aqui que nós vamos armazenar a string do usuário
	char letra_usuario; // = 'alguma letra' /*guarda a letra digitada pelo usuário
	int // conta_letra = 0,
		/*vai armazenar a quantidade de vezes que a letra especificada pelo usuário
							aparece na string*/
		linha, //laço para Matriz das linhas
		coluna, //laço para Matriz das colunas
		i=0,j=0,                  /irá controlar o laço for()/
		tamanho_string = 0; /irá guardar o tamanho da string digitada pelo usuário/
	char Matriz[20][20], //Essa Matriz vai armazenar o texto que o usuário digitou
		MatrizInv[20][20]; // essa aqui vai ser a Matriz do tipo Inversa, onde ela transformará linha em coluna

		printf("Quantos Caracteres vai conter sua Mensagem?")
		scanf("%d", &n);

  inicio-
	printf("\nDigite uma frase de no maximo %d Caracteres.\n",n);
	gets("%s",&texto_usuario);/*o gets() serve para guardar uma string de caracteres na variável especificada entre
			 os parênteses*/
	texto_usuario = texto_usuario.Trim(); // Função TRIM remove todo os espaços em branco do texto digitado. Não funcionando ainda sla pq



	tamanho_string = strlen(texto_usuario);/*a variável tamanho_string irá conter o tamanho da string =) */

		for (linha = 0; linha < 20; linha++)
		{

			for (coluna = 0; coluna < 20; coluna++)
			{

				Matriz[linha][coluna] = strlen(texto_usuario,1);

			}




	   }
}
