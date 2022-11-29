#include <stdlib.h>
#include <stdio.h>
#include "listaDeCartas.h"


typedef struct node{
  Carta carta;
  struct node* next;
}Node;

struct listaDeCartas{
  Node* head;
  int tam;
};

ListaDeCartas* cria_lista_cartas(){
  ListaDeCartas* li = (ListaDeCartas*)malloc(sizeof(ListaDeCartas));
  li->head = NULL;
  li->tam = 0;
  return li;
}

void add_carta(ListaDeCartas* li, Carta carta){
  Node* novo_node = (Node*) malloc(sizeof(Node));
  novo_node->next = NULL;
  novo_node->carta = carta;
  if(li->head == NULL){
    li->head = novo_node;
    li->tam++;
    return;
  }

  Node* aux = li->head;
  
  aux = li->head;
  
  while(aux != NULL && aux->next != NULL){
    aux = aux->next;
  }
    
  aux->next = novo_node;
  li->tam++;
}

int size_lista_cartas(ListaDeCartas* li){
  return li->tam;
}

Carta get_carta_by_index(ListaDeCartas* li, int index){
  Carta erro = {'0',"000"};
  Node* aux = li->head;
  //if(index >= 0 && index < li->tam){
   //for(int i=0; i<index; i++){
     //aux = aux->next;
  // } 
  //  return aux->carta;
  //}
  return aux->carta;
}






