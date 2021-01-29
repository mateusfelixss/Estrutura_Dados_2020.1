/**
 * Implemente as funções-membro da classe List neste arquivo.
 * Algumas funções já estão implementadas abaixo
 */

// Implementacao da classe List
#include <iostream>
#include <climits>
#include "List.h"

// Definicao do struct Node
// Possui dois campos: value (valor inteiro) e 
// next (que eh um ponteiro para Node)
// Em C++, structs tambem podem ter construtores e destrutores. Aqui,
// Eu coloquei um destrutor que imprime uma mensagem na tela a fim 
// de rastrear se todos os nos alocados dinamicamente serao todos liberados.
struct Node {
    int value; 
    Node *next; 
    ~Node() { std::cout << "Node " << this->value << " removido" << std::endl; }
};

// Construtor. 
// Como nossa lista simplesmente encadeada possui no cabeca,
// Alcoamos dinamicamente um no cabeca aqui no construtor e 
// inicializamos os valores de seus campos. Nao mexa nesses valores, 
// pois caso contrario, o Moodle nao reconhecera as saidas corretamente.
List::List() {
    head = new Node;
    head->value = -77777777;
    head->next = nullptr;
}

// Destrutor. Limpamos a lista e depois liberamos o no cabeca.
// Antes de sair, imprime mensagem na saida, avisando que a 
// lista foi liberada.
List::~List() {
    clear();
    delete head;
    std::cout << "lista liberada" << std::endl;
}

