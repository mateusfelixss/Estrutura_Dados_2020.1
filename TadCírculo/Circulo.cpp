#include <iostream>
#include <cmath>
#include "Circulo.h"
using namespace std;

// Declaracao do Tipo de dado exportado
struct Circulo{
    Ponto p;
    double raio;
};

// Aloca e retorna um struct Circulo
Circulo *circ_cria(double raio, Ponto *centro){
    Circulo *c = new Circulo;

    if (c == nullptr) {
      cout << "Nao foi possivel alocar memoria." << endl;
      return 0;
    }
    c->p = p;
    c->p = raio;
    return c;
}

// Libera a memoria que foi alocada para o struct Circulo                               
void circ_libera(Circulo *c){
    delete c;
}

// setters
void circ_setRaio(Circulo *c, double raio){
    c->raio = raio;
}

// setters
void circ_setCentro(Circulo *c, Ponto *p){
    c->p = pto_distancia() / 2;
}

// setters
// coordenada x do centro do Circulo c
void circ_setX(Circulo *c, double x){ 
    c->p = x;
} 

// setters
// coordenada y do centro do Circulo c
void circ_setY(Circulo *c, double y){
    c->p = y;
}

// getters
double circ_getRaio(Circulo *c){
    return *raio = c->raio;
}

// getters
Ponto *circ_getCentro(Circulo *c){
    
}

// getters
 // coordenada x do centro do Circulo c
double circ_getX(Circulo *c){

}

// getters
 // coordenada y do centro do Circulo c
double circ_getY(Circulo *c){

}

// Retorna a area do Circulo c
double circ_getArea(Circulo *c){

}

// Recebe um Ponto p e um Circulo c e retorna:
// true: se o ponto esta contido no circulo;
// false: caso contrario.
bool circ_interior(Circulo *c, Ponto *p){

}