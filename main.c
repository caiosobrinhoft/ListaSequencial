#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

int main(int argc, char *argv[])
{ 
  tipo_elem aux;
  int op = 0;
  lista listaOrd;
  lista listaDesord;
  Definir(&listaOrd); //cria listas vazias para lista ordenada e desordenada
  Definir(&listaDesord);
  
  int p = 0;
  //Preencher aqui um exemplo pratico que utiliza parte das operacoes da lista sequencial
  do
  {
    printf("\nDigite a opcao desejada: ");
    printf("\n 1 - Inserir elemento na lista");
    printf("\n 2 - Buscar elemento na lista");
    printf("\n 3 - Remover elemento na lista");
    printf("\n 4 - Imprimir lista");
    printf("\n 5 - Tamanho da lista");
    printf("\n 6 - Sair");
    printf("\n\n -> ");
    scanf("%d", &op);

    switch (op)
    {
    case 1:
      printf("\nDigite a chave do carro: ");
      scanf("%d", &aux.chave);
      printf("\nDigite a marca do carro: ");
      scanf("%s", aux.info.marca);
      printf("\nDigite o modelo do carro: ");
      scanf("%s", aux.info.modelo);
      printf("\nDigite o ano do carro: ");
      scanf("%d", &aux.info.ano);
      printf("\n");
      if(Inserir_posic(aux, listaDesord.nelem+1, &listaDesord))
        printf("\nInsertion Success!");
      break;
    case 2:
      printf("\nDigite o elemento a ser buscado: ");
      scanf("%d", &aux.chave);

      Buscar(aux.chave, &listaDesord, &p);
      break;

    default:
      break;
    }

  } while (op!=6);
  
  
  
  system("PAUSE");
  return 0;
}

