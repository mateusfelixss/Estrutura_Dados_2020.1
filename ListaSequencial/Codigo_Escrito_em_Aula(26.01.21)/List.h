#ifndef LIST_H
#define LIST_H

struct Node;

class List {
public:
   List(); // Construtor
   void add(int x); // Insere x ao final da lista
   void print(); // Imprime elementos
   void remove(int x); // remove o primeiro no com valor x
   /*
   ~List(); // Destrutor: libera memoria alocada
   
   bool empty(); // Esta vazia?
   int size(); // retorna numero de elementos na lista
   void clear(); // deixa a lista vazia
   */
   
private:
      Node *head; // Ponteiro para o no cabeca da lista
      
      Node *search(int x); // Operacao auxiliar: retorna no antecessor do no 
                           // com valor x, ou nullptr caso x nao esteja presente
      /*
      void clearRecursive(Node *node); // libera todos os nos alcancaveis 
                                       // a partir de node recursivamente
      
      void printRecursive(Node *node); // Imprime recursivamente a partir de node
      */
};

#endif
