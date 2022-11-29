#ifndef LISTA_DE_CARTAS
#define LISTA_DE_CARTAS

typedef struct carta{
    char valor;
    char naipe[4];
}Carta;

typedef struct listaDeCartas ListaDeCartas;

ListaDeCartas* cria_lista_cartas();
void add_carta(ListaDeCartas* li, Carta carta);
Carta get_carta_by_index(ListaDeCartas* li, int index);
int size_lista_cartas(ListaDeCartas* li);


#endif