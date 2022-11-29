#include <stdio.h>
#include "listaDeCartas.h"

int main(){
  ListaDeCartas* hand = cria_lista_cartas();
  Carta c = {'A', "♤"};
  Carta f = {'B', "♤"};
  add_carta(hand, c);
  add_carta(hand, c);
  add_carta(hand, c);
  add_carta(hand, f);
  add_carta(hand, c);
  add_carta(hand, c);
  
  Carta d = get_carta_by_index(hand, 4);

  printf("%c%s", d.valor, d.naipe);

  //printf("%d", size_lista_cartas(hand));
  return 0;
}
