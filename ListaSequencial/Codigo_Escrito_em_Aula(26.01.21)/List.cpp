#include <iostream>
#include "List.h"
using namespace std;

struct Node {
    int value;
    Node *next;
};

// Construtor
List::List() {
    head = new Node;
    head->value = 0;
    head->next = nullptr;
}

// Insere no ao final da lista
void List::add(int x) {
    Node *novo = new Node;
    novo->value = x;
    novo->next = nullptr;

    novo->next = head->next;
    head->next = novo;
}

// Imprime a lista
void List::print() {
    Node *aux = head->next;
    while(aux != nullptr) {
        cout << aux->value << " ";
        aux = aux->next;
    }
    cout << endl;
}

// Operacao auxiliar: retorna no antecessor do no 
// com valor x, ou nullptr caso x nao esteja presente
Node *List::search(int x) {
    Node *aux = head;
    while(aux->next != nullptr) {
        if(aux->next->value == x) {
            return aux;
        }
        aux = aux->next;
    }
    return nullptr;
}

// remove o primeiro no com valor x
void List::remove(int x) {
    Node *aux = search(x);
    if(aux != nullptr) {
        Node *aux2 = aux->next;
        aux->next = aux->next->next;
        delete aux2;
    }
}

